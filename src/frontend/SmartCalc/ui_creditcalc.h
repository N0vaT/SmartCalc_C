/********************************************************************************
** Form generated from reading UI file 'creditcalc.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITCALC_H
#define UI_CREDITCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditCalc
{
public:
    QLabel *label_2;
    QLineEdit *l_sum_credit;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *l_term_credit;
    QLineEdit *l_percent;
    QLabel *label_4;
    QPushButton *b_ann;
    QPushButton *b_dif;
    QPlainTextEdit *result_text;

    void setupUi(QWidget *CreditCalc)
    {
        if (CreditCalc->objectName().isEmpty())
            CreditCalc->setObjectName(QString::fromUtf8("CreditCalc"));
        CreditCalc->resize(400, 300);
        label_2 = new QLabel(CreditCalc);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 131, 21));
        l_sum_credit = new QLineEdit(CreditCalc);
        l_sum_credit->setObjectName(QString::fromUtf8("l_sum_credit"));
        l_sum_credit->setGeometry(QRect(180, 30, 113, 21));
        label = new QLabel(CreditCalc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 101, 21));
        label_3 = new QLabel(CreditCalc);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 131, 21));
        l_term_credit = new QLineEdit(CreditCalc);
        l_term_credit->setObjectName(QString::fromUtf8("l_term_credit"));
        l_term_credit->setGeometry(QRect(180, 70, 113, 21));
        l_percent = new QLineEdit(CreditCalc);
        l_percent->setObjectName(QString::fromUtf8("l_percent"));
        l_percent->setGeometry(QRect(180, 110, 113, 21));
        label_4 = new QLabel(CreditCalc);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 150, 101, 21));
        b_ann = new QPushButton(CreditCalc);
        b_ann->setObjectName(QString::fromUtf8("b_ann"));
        b_ann->setGeometry(QRect(130, 150, 100, 32));
        b_dif = new QPushButton(CreditCalc);
        b_dif->setObjectName(QString::fromUtf8("b_dif"));
        b_dif->setGeometry(QRect(230, 150, 161, 32));
        result_text = new QPlainTextEdit(CreditCalc);
        result_text->setObjectName(QString::fromUtf8("result_text"));
        result_text->setGeometry(QRect(30, 200, 341, 91));

        retranslateUi(CreditCalc);

        QMetaObject::connectSlotsByName(CreditCalc);
    } // setupUi

    void retranslateUi(QWidget *CreditCalc)
    {
        CreditCalc->setWindowTitle(QCoreApplication::translate("CreditCalc", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("CreditCalc", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260 (\320\274\320\265\321\201)", nullptr));
        label->setText(QCoreApplication::translate("CreditCalc", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("CreditCalc", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("CreditCalc", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \321\202\320\270\320\277 ", nullptr));
        b_ann->setText(QCoreApplication::translate("CreditCalc", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        b_dif->setText(QCoreApplication::translate("CreditCalc", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreditCalc: public Ui_CreditCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITCALC_H
