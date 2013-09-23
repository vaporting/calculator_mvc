/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created: Thu Aug 9 15:33:23 2012
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculatorClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_dot;
    QPushButton *pushButton_0;
    QPushButton *pushButton_div;
    QPushButton *pushButton_mul;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_add;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_equal;
    QLCDNumber *lcdNumber;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
	QPalette pal;

    void setupUi(QMainWindow *calculatorClass)
    {
        if (calculatorClass->objectName().isEmpty())
            calculatorClass->setObjectName(QString::fromUtf8("calculatorClass"));
        calculatorClass->resize(178, 238);
        centralWidget = new QWidget(calculatorClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(10, 70, 25, 25));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(40, 70, 25, 25));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 70, 25, 25));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 100, 25, 25));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 100, 25, 25));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(70, 100, 25, 25));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 130, 25, 25));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(40, 130, 25, 25));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(70, 130, 25, 25));
        pushButton_dot = new QPushButton(centralWidget);
        pushButton_dot->setObjectName(QString::fromUtf8("pushButton_dot"));
        pushButton_dot->setGeometry(QRect(70, 160, 25, 25));
        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(10, 160, 51, 25));
        pushButton_div = new QPushButton(centralWidget);
        pushButton_div->setObjectName(QString::fromUtf8("pushButton_div"));
        pushButton_div->setGeometry(QRect(100, 70, 25, 25));
        pushButton_mul = new QPushButton(centralWidget);
        pushButton_mul->setObjectName(QString::fromUtf8("pushButton_mul"));
        pushButton_mul->setGeometry(QRect(100, 100, 25, 25));
        pushButton_sub = new QPushButton(centralWidget);
        pushButton_sub->setObjectName(QString::fromUtf8("pushButton_sub"));
        pushButton_sub->setGeometry(QRect(100, 130, 25, 25));
        pushButton_add = new QPushButton(centralWidget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        pushButton_add->setGeometry(QRect(100, 160, 25, 25));
        pushButton_cancel = new QPushButton(centralWidget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setGeometry(QRect(130, 70, 25, 25));
        pushButton_equal = new QPushButton(centralWidget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        pushButton_equal->setGeometry(QRect(130, 100, 25, 85));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 10, 140, 40));
		lcdNumber->setNumDigits(10);
		//fill lcdNumber background
		lcdNumber->setAutoFillBackground(true);
		pal=lcdNumber->palette();
		pal.setColor(QPalette::Normal, QPalette::Window, Qt::white);
		lcdNumber->setPalette(pal);

        calculatorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(calculatorClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 178, 22));
        calculatorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(calculatorClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        calculatorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(calculatorClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        calculatorClass->setStatusBar(statusBar);

        retranslateUi(calculatorClass);
        QObject::connect(pushButton_1, SIGNAL(clicked()), calculatorClass, SLOT(Button_1_click()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), calculatorClass, SLOT(Button_2_click()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), calculatorClass, SLOT(Button_3_click()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), calculatorClass, SLOT(Button_4_click()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), calculatorClass, SLOT(Button_5_click()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), calculatorClass, SLOT(Button_6_click()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), calculatorClass, SLOT(Button_7_click()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), calculatorClass, SLOT(Button_8_click()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), calculatorClass, SLOT(Button_9_click()));
        QObject::connect(pushButton_0, SIGNAL(clicked()), calculatorClass, SLOT(Button_0_click()));
        QObject::connect(pushButton_dot, SIGNAL(clicked()), calculatorClass, SLOT(Button_dot_click()));
		QObject::connect(pushButton_add, SIGNAL(clicked()), calculatorClass, SLOT(Button_add_click()));
		QObject::connect(pushButton_sub, SIGNAL(clicked()), calculatorClass, SLOT(Button_sub_click()));
		QObject::connect(pushButton_mul, SIGNAL(clicked()), calculatorClass, SLOT(Button_mul_click()));
		QObject::connect(pushButton_div, SIGNAL(clicked()), calculatorClass, SLOT(Button_div_click()));
		QObject::connect(pushButton_equal, SIGNAL(clicked()), calculatorClass, SLOT(Button_equal_click()));
		QObject::connect(pushButton_cancel, SIGNAL(clicked()), calculatorClass, SLOT(Button_cancel_click()));




        QMetaObject::connectSlotsByName(calculatorClass);
    } // setupUi

    void retranslateUi(QMainWindow *calculatorClass)
    {
        calculatorClass->setWindowTitle(QApplication::translate("calculatorClass", "calculator", 0, QApplication::UnicodeUTF8));
        pushButton_1->setText(QApplication::translate("calculatorClass", "1", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("calculatorClass", "2", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("calculatorClass", "3", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("calculatorClass", "4", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("calculatorClass", "5", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("calculatorClass", "6", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("calculatorClass", "7", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("calculatorClass", "8", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("calculatorClass", "9", 0, QApplication::UnicodeUTF8));
        pushButton_dot->setText(QApplication::translate("calculatorClass", ".", 0, QApplication::UnicodeUTF8));
        pushButton_0->setText(QApplication::translate("calculatorClass", "0", 0, QApplication::UnicodeUTF8));
        pushButton_div->setText(QApplication::translate("calculatorClass", "/", 0, QApplication::UnicodeUTF8));
        pushButton_mul->setText(QApplication::translate("calculatorClass", "*", 0, QApplication::UnicodeUTF8));
        pushButton_sub->setText(QApplication::translate("calculatorClass", "-", 0, QApplication::UnicodeUTF8));
        pushButton_add->setText(QApplication::translate("calculatorClass", "+", 0, QApplication::UnicodeUTF8));
        pushButton_cancel->setText(QApplication::translate("calculatorClass", "C", 0, QApplication::UnicodeUTF8));
        pushButton_equal->setText(QApplication::translate("calculatorClass", "=", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class calculatorClass: public Ui_calculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
