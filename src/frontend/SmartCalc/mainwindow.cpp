#include <cstring>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->b_0, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_1, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_2, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_3, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_4, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_5, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_6, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_7, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_8, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_9, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_x, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->bAdd, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->bSub, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->bMul, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->bDiv, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->bPow, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->bMod, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->bPoint, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_bracket_on, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_bracket_off, SIGNAL(clicked()), this, SLOT(digits_numbers()));
    connect(ui->b_cos, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->b_sin, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->b_tan, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->b_acos, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->b_asin, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->b_atan, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->b_sqrt, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->b_ln, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->b_log, SIGNAL(clicked()), this, SLOT(functions()));
    connect(ui->bEqual, SIGNAL(clicked()), this, SLOT(calculate()));
    connect(ui->lineEdit, SIGNAL(returnPressed()), SLOT(calculate()));
    connect(ui->bDelete, SIGNAL(clicked()), this, SLOT(del_line()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digits_numbers()
{
    QPushButton *button = (QPushButton *)sender();
    QString out_string;
    out_string = (ui->lineEdit->text()+button->text());

    ui->lineEdit->setText(out_string);
}

void MainWindow::del_line()
{
    ui->lineEdit->clear();
}

void MainWindow::functions()
{
    QPushButton *button = (QPushButton *)sender();
    QString out_string;
    out_string = (ui->lineEdit->text()+button->text()+"(");

    ui->lineEdit->setText(out_string);
}

void MainWindow::calculate(){
    QString str = ui->lineEdit->text(); 
    std::string my_str = str.toStdString();
    const char *c_my_str = my_str.c_str();
    char out_str[300] = "";
    int exep = polish_notac(c_my_str, out_str, 0, 0);
    if(exep == 3){
        add_graphic(c_my_str, out_str);
    }else{
        QString str_out = QString::fromUtf8(out_str);
        if(exep == 0){
            ui->lineEdit->setText(QString::number(str_out.toDouble()));
        }else{
            ui->lineEdit->setText(str_out);
        }
    }
}

void MainWindow::add_graphic(const char *c_my_str, char *out_str){
    h = 0.01;
    if (ui->lineEdit_x_begin->text().isEmpty()){
        ui->lineEdit_x_begin->setText("" + QString::number(-4));
    }
    if (ui->lineEdit_x_end->text().isEmpty()){
        ui->lineEdit_x_end->setText("" + QString::number(10));
    }
    if (ui->lineEdit_y_begin->text().isEmpty()){
        ui->lineEdit_y_begin->setText("" + QString::number(-4));
    }
    if (ui->lineEdit_y_end->text().isEmpty()){
    ui->lineEdit_y_end->setText("" + QString::number(2));
    }
    yBegin = ui->lineEdit_y_begin->text().toDouble();
    xEnd = ui->lineEdit_x_end->text().toDouble();
    xBegin = ui->lineEdit_x_begin->text().toDouble();
    yEnd = ui->lineEdit_y_end->text().toDouble();

    if (xEnd < xBegin || yEnd < yBegin) {
        xBegin = -4;
        xEnd = 10;
        yBegin = -4;
        yEnd = 2;
    }
    ui->widget->xAxis->setRange(xBegin, xEnd);
    ui->widget->yAxis->setRange(yBegin, yEnd);
    N = (xEnd - xBegin) / h + 1;
    int i = 0;
    QVector<double> x(N), y(N);
    for(X = xBegin; X <= xEnd; X +=h)
    {   
        polish_notac(c_my_str, out_str, 1, X);
            x[i] = X;
            double Y = QString::fromUtf8(out_str).toDouble();
            if(Y < yEnd && Y > yBegin)
                y[i] = Y;
            else{
                y[i] = NAN;
            }
        i++;
    }
    ui->widget->clearGraphs();
    ui->widget->addGraph();
    ui->widget->graph(0)->addData(x, y);
    ui->widget->replot();
    x.clear();
    y.clear();
}


void MainWindow::on_bCredit_clicked()
{
    CreditCalc *credit = new CreditCalc();
    credit->show();
}


void MainWindow::on_bDeposit_clicked()
{
    DepositCalc *credit = new DepositCalc();
    credit->show();
}

