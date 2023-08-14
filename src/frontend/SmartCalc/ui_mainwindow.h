/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *bDeposit;
    QPushButton *bCredit;
    QLineEdit *lineEdit;
    QPushButton *b_1;
    QPushButton *b_2;
    QPushButton *b_3;
    QPushButton *b_4;
    QPushButton *b_5;
    QPushButton *b_6;
    QPushButton *b_7;
    QPushButton *b_8;
    QPushButton *b_9;
    QPushButton *b_0;
    QPushButton *bPoint;
    QPushButton *bEqual;
    QPushButton *bAdd;
    QPushButton *bSub;
    QPushButton *bMul;
    QPushButton *bDiv;
    QPushButton *bDelete;
    QPushButton *bMod;
    QPushButton *b_bracket_off;
    QPushButton *b_bracket_on;
    QPushButton *b_log;
    QPushButton *b_ln;
    QPushButton *b_sqrt;
    QPushButton *b_atan;
    QPushButton *b_asin;
    QPushButton *b_acos;
    QPushButton *b_tan;
    QPushButton *b_sin;
    QPushButton *b_cos;
    QPushButton *bPow;
    QCustomPlot *widget;
    QLineEdit *lineEdit_x_begin;
    QLineEdit *lineEdit_y_begin;
    QLineEdit *lineEdit_x_end;
    QLineEdit *lineEdit_y_end;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *b_x;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 650);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        bDeposit = new QPushButton(centralwidget);
        bDeposit->setObjectName(QString::fromUtf8("bDeposit"));
        bDeposit->setGeometry(QRect(310, 0, 281, 35));
        bCredit = new QPushButton(centralwidget);
        bCredit->setObjectName(QString::fromUtf8("bCredit"));
        bCredit->setGeometry(QRect(10, 0, 271, 35));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 40, 581, 51));
        QFont font;
        font.setPointSize(20);
        lineEdit->setFont(font);
        b_1 = new QPushButton(centralwidget);
        b_1->setObjectName(QString::fromUtf8("b_1"));
        b_1->setGeometry(QRect(130, 480, 100, 40));
        b_2 = new QPushButton(centralwidget);
        b_2->setObjectName(QString::fromUtf8("b_2"));
        b_2->setGeometry(QRect(240, 480, 100, 40));
        b_3 = new QPushButton(centralwidget);
        b_3->setObjectName(QString::fromUtf8("b_3"));
        b_3->setGeometry(QRect(350, 480, 100, 40));
        b_4 = new QPushButton(centralwidget);
        b_4->setObjectName(QString::fromUtf8("b_4"));
        b_4->setGeometry(QRect(130, 440, 100, 40));
        b_5 = new QPushButton(centralwidget);
        b_5->setObjectName(QString::fromUtf8("b_5"));
        b_5->setGeometry(QRect(240, 440, 100, 40));
        b_6 = new QPushButton(centralwidget);
        b_6->setObjectName(QString::fromUtf8("b_6"));
        b_6->setGeometry(QRect(350, 440, 100, 40));
        b_7 = new QPushButton(centralwidget);
        b_7->setObjectName(QString::fromUtf8("b_7"));
        b_7->setGeometry(QRect(130, 400, 100, 40));
        b_8 = new QPushButton(centralwidget);
        b_8->setObjectName(QString::fromUtf8("b_8"));
        b_8->setGeometry(QRect(240, 400, 100, 40));
        b_9 = new QPushButton(centralwidget);
        b_9->setObjectName(QString::fromUtf8("b_9"));
        b_9->setGeometry(QRect(350, 400, 100, 40));
        b_0 = new QPushButton(centralwidget);
        b_0->setObjectName(QString::fromUtf8("b_0"));
        b_0->setGeometry(QRect(130, 520, 100, 40));
        bPoint = new QPushButton(centralwidget);
        bPoint->setObjectName(QString::fromUtf8("bPoint"));
        bPoint->setGeometry(QRect(240, 520, 100, 40));
        bEqual = new QPushButton(centralwidget);
        bEqual->setObjectName(QString::fromUtf8("bEqual"));
        bEqual->setGeometry(QRect(350, 520, 100, 40));
        bAdd = new QPushButton(centralwidget);
        bAdd->setObjectName(QString::fromUtf8("bAdd"));
        bAdd->setGeometry(QRect(470, 520, 100, 40));
        bSub = new QPushButton(centralwidget);
        bSub->setObjectName(QString::fromUtf8("bSub"));
        bSub->setGeometry(QRect(470, 480, 100, 40));
        bMul = new QPushButton(centralwidget);
        bMul->setObjectName(QString::fromUtf8("bMul"));
        bMul->setGeometry(QRect(470, 440, 100, 40));
        bDiv = new QPushButton(centralwidget);
        bDiv->setObjectName(QString::fromUtf8("bDiv"));
        bDiv->setGeometry(QRect(470, 400, 100, 40));
        bDelete = new QPushButton(centralwidget);
        bDelete->setObjectName(QString::fromUtf8("bDelete"));
        bDelete->setGeometry(QRect(130, 310, 321, 40));
        bMod = new QPushButton(centralwidget);
        bMod->setObjectName(QString::fromUtf8("bMod"));
        bMod->setGeometry(QRect(470, 310, 100, 40));
        b_bracket_off = new QPushButton(centralwidget);
        b_bracket_off->setObjectName(QString::fromUtf8("b_bracket_off"));
        b_bracket_off->setGeometry(QRect(240, 350, 100, 40));
        b_bracket_on = new QPushButton(centralwidget);
        b_bracket_on->setObjectName(QString::fromUtf8("b_bracket_on"));
        b_bracket_on->setGeometry(QRect(130, 350, 100, 40));
        b_log = new QPushButton(centralwidget);
        b_log->setObjectName(QString::fromUtf8("b_log"));
        b_log->setGeometry(QRect(10, 550, 100, 40));
        b_ln = new QPushButton(centralwidget);
        b_ln->setObjectName(QString::fromUtf8("b_ln"));
        b_ln->setGeometry(QRect(10, 510, 100, 40));
        b_sqrt = new QPushButton(centralwidget);
        b_sqrt->setObjectName(QString::fromUtf8("b_sqrt"));
        b_sqrt->setGeometry(QRect(10, 470, 100, 40));
        b_atan = new QPushButton(centralwidget);
        b_atan->setObjectName(QString::fromUtf8("b_atan"));
        b_atan->setGeometry(QRect(10, 430, 100, 40));
        b_asin = new QPushButton(centralwidget);
        b_asin->setObjectName(QString::fromUtf8("b_asin"));
        b_asin->setGeometry(QRect(10, 390, 100, 40));
        b_acos = new QPushButton(centralwidget);
        b_acos->setObjectName(QString::fromUtf8("b_acos"));
        b_acos->setGeometry(QRect(10, 350, 100, 40));
        b_tan = new QPushButton(centralwidget);
        b_tan->setObjectName(QString::fromUtf8("b_tan"));
        b_tan->setGeometry(QRect(10, 310, 100, 40));
        b_sin = new QPushButton(centralwidget);
        b_sin->setObjectName(QString::fromUtf8("b_sin"));
        b_sin->setGeometry(QRect(10, 270, 100, 40));
        b_cos = new QPushButton(centralwidget);
        b_cos->setObjectName(QString::fromUtf8("b_cos"));
        b_cos->setGeometry(QRect(10, 230, 100, 40));
        bPow = new QPushButton(centralwidget);
        bPow->setObjectName(QString::fromUtf8("bPow"));
        bPow->setGeometry(QRect(470, 350, 100, 40));
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 100, 561, 121));
        lineEdit_x_begin = new QLineEdit(centralwidget);
        lineEdit_x_begin->setObjectName(QString::fromUtf8("lineEdit_x_begin"));
        lineEdit_x_begin->setGeometry(QRect(250, 250, 61, 21));
        lineEdit_y_begin = new QLineEdit(centralwidget);
        lineEdit_y_begin->setObjectName(QString::fromUtf8("lineEdit_y_begin"));
        lineEdit_y_begin->setGeometry(QRect(250, 280, 61, 21));
        lineEdit_x_end = new QLineEdit(centralwidget);
        lineEdit_x_end->setObjectName(QString::fromUtf8("lineEdit_x_end"));
        lineEdit_x_end->setGeometry(QRect(330, 250, 61, 21));
        lineEdit_y_end = new QLineEdit(centralwidget);
        lineEdit_y_end->setObjectName(QString::fromUtf8("lineEdit_y_end"));
        lineEdit_y_end->setGeometry(QRect(330, 280, 61, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 250, 21, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 280, 21, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 230, 31, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(330, 230, 31, 16));
        b_x = new QPushButton(centralwidget);
        b_x->setObjectName(QString::fromUtf8("b_x"));
        b_x->setGeometry(QRect(350, 350, 100, 40));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 24));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        bDeposit->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\277\320\276\320\267\320\270\321\202\320\275\321\213\320\271", nullptr));
        bCredit->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\265\320\264\320\270\321\202\320\275\321\213\320\271", nullptr));
        lineEdit->setText(QString());
        b_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        b_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        b_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        b_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        b_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        b_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        b_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        b_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        b_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        b_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        bPoint->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        bEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        bAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        bSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        bMul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        bDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        bDelete->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        bMod->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        b_bracket_off->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        b_bracket_on->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        b_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        b_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        b_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        b_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        b_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        b_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        b_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        b_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        b_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        bPow->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        lineEdit_x_begin->setText(QString());
        lineEdit_y_begin->setText(QString());
        lineEdit_x_end->setText(QString());
        lineEdit_y_end->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "X :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Y :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "MAX", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "MIN", nullptr));
        b_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\321\214\320\272\321\203\320\273\321\217\321\202\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
