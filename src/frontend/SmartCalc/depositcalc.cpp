#include "depositcalc.h"
#include "ui_depositcalc.h"

DepositCalc::DepositCalc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DepositCalc)
{
    ui->setupUi(this);

    connect(ui->b_calculate, SIGNAL(clicked()), this, SLOT(calculate()));
}

DepositCalc::~DepositCalc()
{
    delete ui;
}


void DepositCalc::calculate(){
    ui->result_text->clear();
    if(ui->l_sum->text().isEmpty() || ui->l_term->text().isEmpty() || ui->l_procent->text().isEmpty() || ui->l_period->text().isEmpty()){
        ui->result_text->appendPlainText("Введите данные");
    }else{
        double S = ui->l_sum->text().toDouble();
        double N = ui->l_term->text().toDouble();
        double procent = ui->l_procent->text().toDouble();
        double tax = ui->l_tax->text().toDouble();
        double period = ui->l_period->text().toDouble();
        int capitalization = ui->rB_capitalization->isChecked();

        double interest_paid = 0;
        double final_amount_deposit = 0;
        double tax_amount = 0;

        if (!capitalization) {
            final_amount_deposit = S;
            interest_paid = (S * procent * N / 12) / 100;
        } else {
            final_amount_deposit = S * pow(1 + (period / 12) * (procent / 100), N);
            interest_paid = final_amount_deposit - S;
        }
        if (interest_paid > 75000) {
            tax_amount = tax / 100 * (interest_paid - 75000);
        }

        ui->result_text->appendPlainText("Начисленные проценты: " + QString::number(interest_paid));
        ui->result_text->appendPlainText("Сумма налога: " + QString::number(tax_amount));
        ui->result_text->appendPlainText("Сумма на вкладе к концу срока: " + QString::number(final_amount_deposit));
    }
}