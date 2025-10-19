#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private:
    Ui::Calculator *ui;
    QNetworkAccessManager *manager;

private slots:
    void NumPressed();
    void MathButtonPressed();
    void EqualsButton();
    void ClearButton();
    void CalculatorClicked();
    void CurrencyButtonClicked();
    void ConvertCurrency();
    void ReplayFinished(QNetworkReply *reply);
    void ClearCurrency();
};
#endif // CALCULATOR_H
