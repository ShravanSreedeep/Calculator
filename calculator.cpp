#include "calculator.h"
#include "ui_calculator.h"

double calcVal = 0.0;
bool divTrigger = false;
bool multiTrigger = false;
bool addTrigger = false;
bool subTrigger = false;
QStringList listofcurrency = {
    "AED",
    "AFN",
    "ALL",
    "AMD",
    "AOA",
    "ARS",
    "AUD",
    "AWG",
    "AZN",
    "BAM",
    "BBD",
    "BDT",
    "BGN",
    "BHD",
    "BIF",
    "BMD",
    "BND",
    "BOB",
    "BOV",
    "BRL",
    "BSD",
    "BTN",
    "BWP",
    "BYN",
    "BZD",
    "CAD",
    "CDF",
    "CHE",
    "CHF",
    "CHW",
    "CLF",
    "CLP",
    "CNY",
    "COP",
    "COU",
    "CRC",
    "CUP",
    "CVE",
    "CZK",
    "DJF",
    "DKK",
    "DOP",
    "DZD",
    "EGP",
    "ERN",
    "ETB",
    "EUR",
    "FJD",
    "FKP",
    "GBP",
    "GEL",
    "GHS",
    "GIP",
    "GMD",
    "GNF",
    "GTQ",
    "GYD",
    "HKD",
    "HNL",
    "HTG",
    "HUF",
    "IDR",
    "ILS",
    "INR",
    "IQD",
    "IRR",
    "ISK",
    "JMD",
    "JOD",
    "JPY",
    "KES",
    "KGS",
    "KHR",
    "KMF",
    "KPW",
    "KRW",
    "KWD",
    "KYD",
    "KZT",
    "LAK",
    "LBP",
    "LKR",
    "LRD",
    "LSL",
    "LYD",
    "MAD",
    "MDL",
    "MGA",
    "MKD",
    "MMK",
    "MNT",
    "MOP",
    "MRU",
    "MUR",
    "MVR",
    "MWK",
    "MXN",
    "MXV",
    "MYR",
    "MZN",
    "NAD",
    "NGN",
    "NIO",
    "NOK",
    "NPR",
    "NZD",
    "OMR",
    "PAB",
    "PEN",
    "PGK",
    "PHP",
    "PKR",
    "PLN",
    "PYG",
    "QAR",
    "RON",
    "RSD",
    "RUB",
    "RWF",
    "SAR",
    "SBD",
    "SCR",
    "SDG",
    "SEK",
    "SGD",
    "SHP",
    "SLE",
    "SOS",
    "SRD",
    "SSP",
    "STN",
    "SVC",
    "SYP",
    "SZL",
    "THB",
    "TJS",
    "TMT",
    "TND",
    "TOP",
    "TRY",
    "TTD",
    "TWD",
    "TZS",
    "UAH",
    "UGX",
    "USD",
    "USN",
    "UYI",
    "UYU",
    "UYW",
    "UZS",
    "VED",
    "VES",
    "VND",
    "VUV",
    "WST",
    "XAD",
    "XAF",
    "XAG",
    "XAU",
    "XBA",
    "XBB",
    "XBC",
    "XBD",
    "XCD",
    "XCG",
    "XDR",
    "XOF",
    "XPD",
    "XPF",
    "XPT",
    "XSU",
    "XTS",
    "XUA",
    "XXX",
    "YER",
    "ZAR",
    "ZMW",
    "ZWG"
};

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
    , manager(new QNetworkAccessManager(this))
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/icons/resources/icon.png"));
    ui->stackedWidget->setCurrentIndex(0);
    connect(manager, &QNetworkAccessManager::finished, this, &Calculator::ReplayFinished);
    ui->fromCurrency->setCurrentIndex(63);
    ui->Display->setValidator(new QIntValidator(0, 99999999, this));
    ui->myCurrency->setValidator(new QIntValidator(0, 99999999, this));

    QPushButton *numButtons[11];
    for(int i=0; i<10; ++i){
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this , SLOT(NumPressed()));
    }
    ui->fromCurrency->addItems(listofcurrency);
    ui->toCurrency->addItems(listofcurrency);
    connect(ui->Add, SIGNAL(released()), this , SLOT(MathButtonPressed()));
    connect(ui->Substract, SIGNAL(released()), this , SLOT(MathButtonPressed()));
    connect(ui->Divide, SIGNAL(released()), this , SLOT(MathButtonPressed()));
    connect(ui->MemorMultiply, SIGNAL(released()), this , SLOT(MathButtonPressed()));
    connect(ui->Equals, SIGNAL(released()), this , SLOT(EqualsButton()));
    connect(ui->Clear, SIGNAL(released()), this , SLOT(ClearButton()));
    connect(ui->currencyButton, SIGNAL(clicked(bool)), this , SLOT(CurrencyButtonClicked()));
    connect(ui->goCalculator, SIGNAL(clicked(bool)), this , SLOT(CalculatorClicked()));
    connect(ui->convertCurrency, SIGNAL(released()), this , SLOT(ConvertCurrency()));
    connect(ui->clearCurrency, SIGNAL(released()),this,SLOT(ClearCurrency()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butval = button->text();
    QString displayVal = ui->Display->text();
    if((displayVal.toDouble() == 0) || (displayVal.toDouble() == 0.0)){
        ui->Display->setText(butval);
    }
    else{
        QString newVal = displayVal+butval;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
}

void Calculator::MathButtonPressed(){
    divTrigger = false;
    multiTrigger = false;
    addTrigger = false;
    subTrigger = false;

    QString displayVal = ui->Display->text();
    calcVal = displayVal.toDouble();
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if((QString::compare(butVal, "/", Qt::CaseInsensitive) == 0)){
        divTrigger = true;
    }
    else if((QString::compare(butVal, "*", Qt::CaseInsensitive) == 0)){
        multiTrigger = true;
    }
    else if((QString::compare(butVal, "+", Qt::CaseInsensitive) == 0)){
        addTrigger = true;
    }
    else{
        subTrigger = true;
    }
    ui->Display->setText("");
}

void Calculator::EqualsButton(){
    double solution = 0.0;
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    if(addTrigger || subTrigger||divTrigger||multiTrigger){
        if(addTrigger){
            solution = calcVal + dblDisplayVal;
        }
        else if(multiTrigger){
            solution = calcVal * dblDisplayVal;
        }
        else if(divTrigger){
            solution = calcVal / dblDisplayVal;
        }
        else{
            solution = calcVal - dblDisplayVal;
        }
    }
    ui->Display->setText(QString::number(solution));
}

void Calculator::ClearButton(){
    ui->Display->setText("");
    calcVal = 0.0;
    addTrigger = false;
    multiTrigger = false;
    divTrigger = false;
    subTrigger = false;
}

void Calculator::CalculatorClicked()
{
    ClearCurrency();
    ui->stackedWidget->setCurrentIndex(0);
}


void Calculator::CurrencyButtonClicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Calculator::ConvertCurrency(){
    QFont newFont("Seqoe UI", 24);
    ui->convertedCurrency->setFont(newFont);
    ui->convertedCurrency->setText("Fetching last exchange rates ...");
    QString from = ui->fromCurrency->currentText();
    QString amountstr = ui->myCurrency->text();
    double amount = amountstr.toDouble();

    if(amount<=0){
        QMessageBox::warning(this, "Invalid Input", "Please enter a positive amount.");
        ui->convertedCurrency->setText("");
        return;
    }
    QString url = QString("https://api.exchangerate-api.com/v4/latest/%1").arg(from);
    manager->get(QNetworkRequest(QUrl(url)));
}

void Calculator::ReplayFinished(QNetworkReply *reply){
    if (reply->error() != QNetworkReply::NoError) {
        QMessageBox::critical(this, "Network Error", reply->errorString());
        reply->deleteLater();
        return;
    }
    QByteArray response = reply->readAll();
    QJsonDocument jsonResponse = QJsonDocument::fromJson(response);
    QJsonObject jsonObj = jsonResponse.object();
    QString to = ui->toCurrency->currentText();
    double rate = jsonObj["rates"].toObject()[to].toDouble();
    double amount = ui->myCurrency->text().toDouble();
    double result = amount * rate;

    QFont newFont("Seqoe UI", 24);
    ui->convertedCurrency->setFont(newFont);
    ui->convertedCurrency->setText(QString::number(result));
    reply->deleteLater();
}

void Calculator::ClearCurrency(){
    ui->myCurrency->setText("");
    ui->convertedCurrency->setText("");
}
