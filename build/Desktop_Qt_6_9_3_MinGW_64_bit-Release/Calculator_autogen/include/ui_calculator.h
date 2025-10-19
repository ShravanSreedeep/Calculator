/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *calculator;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_3;
    QPushButton *Clear;
    QPushButton *Button1;
    QPushButton *Button2;
    QPushButton *Button9;
    QPushButton *Add;
    QPushButton *Button3;
    QPushButton *Button8;
    QPushButton *Divide;
    QPushButton *Button5;
    QPushButton *Button0;
    QPushButton *Substract;
    QPushButton *Button4;
    QPushButton *MemorMultiply;
    QLineEdit *Display;
    QPushButton *Button6;
    QPushButton *Equals;
    QPushButton *Button7;
    QPushButton *currencyButton;
    QWidget *currency;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout_2;
    QLineEdit *myCurrency;
    QLabel *convertedCurrency;
    QPushButton *clearCurrency;
    QPushButton *convertCurrency;
    QPushButton *goCalculator;
    QComboBox *toCurrency;
    QComboBox *fromCurrency;
    QMenuBar *menubar;
    QMenu *menuCalculator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName("Calculator");
        Calculator->resize(651, 377);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName("centralwidget");
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        calculator = new QWidget();
        calculator->setObjectName("calculator");
        gridLayoutWidget_2 = new QWidget(calculator);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(10, 0, 611, 311));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        Clear = new QPushButton(gridLayoutWidget_2);
        Clear->setObjectName("Clear");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Clear->sizePolicy().hasHeightForWidth());
        Clear->setSizePolicy(sizePolicy1);
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
" 	rgb(0, 0, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Clear, 4, 0, 1, 1);

        Button1 = new QPushButton(gridLayoutWidget_2);
        Button1->setObjectName("Button1");
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
" 	rgb(0, 0, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Button1, 3, 0, 1, 1);

        Button2 = new QPushButton(gridLayoutWidget_2);
        Button2->setObjectName("Button2");
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
" 	rgb(0, 0, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Button2, 3, 1, 1, 1);

        Button9 = new QPushButton(gridLayoutWidget_2);
        Button9->setObjectName("Button9");
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
" 	rgb(0, 0, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Button9, 1, 2, 1, 1);

        Add = new QPushButton(gridLayoutWidget_2);
        Add->setObjectName("Add");
        sizePolicy1.setHeightForWidth(Add->sizePolicy().hasHeightForWidth());
        Add->setSizePolicy(sizePolicy1);
        Add->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	background-color: rgb(255, 85, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Add, 3, 3, 1, 1);

        Button3 = new QPushButton(gridLayoutWidget_2);
        Button3->setObjectName("Button3");
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
" 	rgb(0, 0, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Button3, 3, 2, 1, 1);

        Button8 = new QPushButton(gridLayoutWidget_2);
        Button8->setObjectName("Button8");
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
" 	rgb(0, 0, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Button8, 1, 1, 1, 1);

        Divide = new QPushButton(gridLayoutWidget_2);
        Divide->setObjectName("Divide");
        sizePolicy1.setHeightForWidth(Divide->sizePolicy().hasHeightForWidth());
        Divide->setSizePolicy(sizePolicy1);
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	background-color: rgb(255, 85, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Divide, 1, 3, 1, 1);

        Button5 = new QPushButton(gridLayoutWidget_2);
        Button5->setObjectName("Button5");
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
" 	rgb(0, 0, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Button5, 2, 1, 1, 1);

        Button0 = new QPushButton(gridLayoutWidget_2);
        Button0->setObjectName("Button0");
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
" 	rgb(0, 0, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Button0, 4, 1, 1, 1);

        Substract = new QPushButton(gridLayoutWidget_2);
        Substract->setObjectName("Substract");
        sizePolicy1.setHeightForWidth(Substract->sizePolicy().hasHeightForWidth());
        Substract->setSizePolicy(sizePolicy1);
        Substract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	background-color: rgb(255, 85, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Substract, 4, 3, 1, 1);

        Button4 = new QPushButton(gridLayoutWidget_2);
        Button4->setObjectName("Button4");
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
" 	rgb(0, 0, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Button4, 2, 0, 1, 1);

        MemorMultiply = new QPushButton(gridLayoutWidget_2);
        MemorMultiply->setObjectName("MemorMultiply");
        sizePolicy1.setHeightForWidth(MemorMultiply->sizePolicy().hasHeightForWidth());
        MemorMultiply->setSizePolicy(sizePolicy1);
        MemorMultiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	background-color: rgb(255, 85, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(MemorMultiply, 2, 3, 1, 1);

        Display = new QLineEdit(gridLayoutWidget_2);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy2);
        QFont font;
        font.setPointSize(48);
        font.setBold(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: palette(base);\n"
"	border: 1px solid gray;\n"
"	color: palette(text)\n"
"}\n"
""));
        Display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_3->addWidget(Display, 0, 0, 1, 4);

        Button6 = new QPushButton(gridLayoutWidget_2);
        Button6->setObjectName("Button6");
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
" 	rgb(0, 0, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Button6, 2, 2, 1, 1);

        Equals = new QPushButton(gridLayoutWidget_2);
        Equals->setObjectName("Equals");
        sizePolicy1.setHeightForWidth(Equals->sizePolicy().hasHeightForWidth());
        Equals->setSizePolicy(sizePolicy1);
        Equals->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	background-color: rgb(255, 85, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Equals, 4, 2, 1, 1);

        Button7 = new QPushButton(gridLayoutWidget_2);
        Button7->setObjectName("Button7");
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
" 	rgb(0, 0, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(Button7, 1, 0, 1, 1);

        currencyButton = new QPushButton(gridLayoutWidget_2);
        currencyButton->setObjectName("currencyButton");
        currencyButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
" 	rgb(0, 0, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_3->addWidget(currencyButton, 5, 3, 1, 1);

        stackedWidget->addWidget(calculator);
        currency = new QWidget();
        currency->setObjectName("currency");
        gridLayoutWidget = new QWidget(currency);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 0, 611, 321));
        gridLayout_2 = new QGridLayout(gridLayoutWidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        myCurrency = new QLineEdit(gridLayoutWidget);
        myCurrency->setObjectName("myCurrency");
        sizePolicy2.setHeightForWidth(myCurrency->sizePolicy().hasHeightForWidth());
        myCurrency->setSizePolicy(sizePolicy2);
        myCurrency->setFont(font);
        myCurrency->setAutoFillBackground(false);
        myCurrency->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: palette(base);\n"
"	border: 1px solid gray;\n"
"	color: palette(text)\n"
"}"));
        myCurrency->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_2->addWidget(myCurrency, 0, 0, 1, 2);

        convertedCurrency = new QLabel(gridLayoutWidget);
        convertedCurrency->setObjectName("convertedCurrency");
        sizePolicy2.setHeightForWidth(convertedCurrency->sizePolicy().hasHeightForWidth());
        convertedCurrency->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(24);
        font1.setBold(true);
        convertedCurrency->setFont(font1);
        convertedCurrency->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        convertedCurrency->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        gridLayout_2->addWidget(convertedCurrency, 1, 0, 1, 2);

        clearCurrency = new QPushButton(gridLayoutWidget);
        clearCurrency->setObjectName("clearCurrency");
        clearCurrency->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(0, 0, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"}"));

        gridLayout_2->addWidget(clearCurrency, 2, 1, 1, 1);

        convertCurrency = new QPushButton(gridLayoutWidget);
        convertCurrency->setObjectName("convertCurrency");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(convertCurrency->sizePolicy().hasHeightForWidth());
        convertCurrency->setSizePolicy(sizePolicy3);
        convertCurrency->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 85, 0);\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(convertCurrency, 2, 0, 1, 1);

        goCalculator = new QPushButton(gridLayoutWidget);
        goCalculator->setObjectName("goCalculator");
        goCalculator->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
" 	rgb(0, 0, 0)\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout_2->addWidget(goCalculator, 2, 2, 1, 3);

        toCurrency = new QComboBox(gridLayoutWidget);
        toCurrency->setObjectName("toCurrency");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(toCurrency->sizePolicy().hasHeightForWidth());
        toCurrency->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(toCurrency, 1, 2, 1, 3);

        fromCurrency = new QComboBox(gridLayoutWidget);
        fromCurrency->setObjectName("fromCurrency");
        sizePolicy4.setHeightForWidth(fromCurrency->sizePolicy().hasHeightForWidth());
        fromCurrency->setSizePolicy(sizePolicy4);

        gridLayout_2->addWidget(fromCurrency, 0, 2, 1, 3);

        stackedWidget->addWidget(currency);

        gridLayout->addWidget(stackedWidget, 0, 2, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 651, 21));
        menuCalculator = new QMenu(menubar);
        menuCalculator->setObjectName("menuCalculator");
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName("statusbar");
        Calculator->setStatusBar(statusbar);

        menubar->addAction(menuCalculator->menuAction());

        retranslateUi(Calculator);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Substract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        MemorMultiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Display->setText(QString());
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
        currencyButton->setText(QCoreApplication::translate("Calculator", "Currency Convertor", nullptr));
        myCurrency->setText(QString());
        convertedCurrency->setText(QCoreApplication::translate("Calculator", "Enter amount ...", nullptr));
        clearCurrency->setText(QCoreApplication::translate("Calculator", "Clear", nullptr));
        convertCurrency->setText(QCoreApplication::translate("Calculator", "Convert", nullptr));
        goCalculator->setText(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        menuCalculator->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
