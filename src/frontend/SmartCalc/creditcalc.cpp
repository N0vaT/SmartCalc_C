#include "creditcalc.h"
#include "ui_creditcalc.h"

CreditCalc::CreditCalc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreditCalc)
{
    ui->setupUi(this);

    connect(ui->b_ann, SIGNAL(clicked()), this, SLOT(calculate_credit_ann()));
    connect(ui->b_dif, SIGNAL(clicked()), this, SLOT(calculate_credit_dif()));
}

CreditCalc::~CreditCalc()
{
    delete ui;
}

void CreditCalc::calculate_credit_ann(){
    ui->result_text->clear();
    if(ui->l_sum_credit->text().isEmpty() || ui->l_term_credit->text().isEmpty() || ui->l_percent->text().isEmpty()){
        ui->result_text->appendPlainText("Введите данные");
    }else{
        double S = ui->l_sum_credit->text().toDouble();
        double N = ui->l_term_credit->text().toDouble();
        double P = ui->l_percent->text().toDouble();
        double m = P/12./100.;
        double kef = m*pow(1+m, N)/(pow(1+m, N)-1);

        ui->result_text->appendPlainText("Ежемесячный платеж - " + QString::number(kef*S));
        ui->result_text->appendPlainText("Начисленные проценты - " + QString::number(kef*S*N-S));
        ui->result_text->appendPlainText("Долг + проценты - " + QString::number(kef*S*N));
    }
}

void CreditCalc::calculate_credit_dif(){
    ui->result_text->clear();
    if(ui->l_sum_credit->text().isEmpty() || ui->l_term_credit->text().isEmpty() || ui->l_percent->text().isEmpty()){
        ui->result_text->appendPlainText("Введите данные");
    }else{
        double S = ui->l_sum_credit->text().toDouble();
        double N = ui->l_term_credit->text().toDouble();
        double P = ui->l_percent->text().toDouble() / 100;
        double s_m = S/N;
        double s_c = 0, ost = S, res = 0;
        for(int i = 1; i<=N; i++){
            s_c = s_m + (ost * P * 1.0/12);
            ost -= s_m;
            ui->result_text->appendPlainText("" + QString::number(i) + ". месяц - " + QString::number(s_c) + " руб.");
            res += s_c;
        }
        ui->result_text->appendPlainText("Начисленные проценты - " + QString::number(res - S));
        ui->result_text->appendPlainText("Долг + проценты - " + QString::number(res));
    }
}