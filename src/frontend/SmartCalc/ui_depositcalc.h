/********************************************************************************
** Form generated from reading UI file 'depositcalc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITCALC_H
#define UI_DEPOSITCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DepositCalc
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *l_sum;
    QLineEdit *l_term;
    QLineEdit *l_procent;
    QLineEdit *l_period;
    QPlainTextEdit *result_text;
    QPushButton *b_calculate;
    QLabel *label_5;
    QLineEdit *l_tax;
    QRadioButton *rB_capitalization;

    void setupUi(QWidget *DepositCalc)
    {
        if (DepositCalc->objectName().isEmpty())
            DepositCalc->setObjectName(QString::fromUtf8("DepositCalc"));
        DepositCalc->resize(400, 343);
        label = new QLabel(DepositCalc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 101, 16));
        label_2 = new QLabel(DepositCalc);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 60, 161, 16));
        label_3 = new QLabel(DepositCalc);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 90, 121, 16));
        label_4 = new QLabel(DepositCalc);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 120, 151, 21));
        l_sum = new QLineEdit(DepositCalc);
        l_sum->setObjectName(QString::fromUtf8("l_sum"));
        l_sum->setGeometry(QRect(210, 30, 161, 21));
        l_term = new QLineEdit(DepositCalc);
        l_term->setObjectName(QString::fromUtf8("l_term"));
        l_term->setGeometry(QRect(210, 60, 161, 21));
        l_procent = new QLineEdit(DepositCalc);
        l_procent->setObjectName(QString::fromUtf8("l_procent"));
        l_procent->setGeometry(QRect(210, 90, 161, 21));
        l_period = new QLineEdit(DepositCalc);
        l_period->setObjectName(QString::fromUtf8("l_period"));
        l_period->setGeometry(QRect(210, 120, 161, 21));
        result_text = new QPlainTextEdit(DepositCalc);
        result_text->setObjectName(QString::fromUtf8("result_text"));
        result_text->setGeometry(QRect(30, 240, 341, 91));
        b_calculate = new QPushButton(DepositCalc);
        b_calculate->setObjectName(QString::fromUtf8("b_calculate"));
        b_calculate->setGeometry(QRect(90, 200, 201, 32));
        label_5 = new QLabel(DepositCalc);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 150, 151, 21));
        l_tax = new QLineEdit(DepositCalc);
        l_tax->setObjectName(QString::fromUtf8("l_tax"));
        l_tax->setGeometry(QRect(210, 150, 161, 21));
        rB_capitalization = new QRadioButton(DepositCalc);
        rB_capitalization->setObjectName(QString::fromUtf8("rB_capitalization"));
        rB_capitalization->setGeometry(QRect(30, 170, 201, 31));

        retranslateUi(DepositCalc);

        QMetaObject::connectSlotsByName(DepositCalc);
    } // setupUi

    void retranslateUi(QWidget *DepositCalc)
    {
        DepositCalc->setWindowTitle(QCoreApplication::translate("DepositCalc", "Form", nullptr));
        label->setText(QCoreApplication::translate("DepositCalc", "\320\241\321\203\320\274\320\274\320\260 \321\204\320\272\320\273\320\260\320\264\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("DepositCalc", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217 (\320\274\320\265\321\201)", nullptr));
        label_3->setText(QCoreApplication::translate("DepositCalc", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("DepositCalc", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202", nullptr));
        b_calculate->setText(QCoreApplication::translate("DepositCalc", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("DepositCalc", "\320\235\320\260\320\273\320\276\320\263", nullptr));
        rB_capitalization->setText(QCoreApplication::translate("DepositCalc", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DepositCalc: public Ui_DepositCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITCALC_H
