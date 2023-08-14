#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <creditcalc.h>
#include <depositcalc.h>

#ifdef __cplusplus
extern "C" {
#endif
#include "../../backend/back_calculate.h"
#ifdef __cplusplus
}
#endif

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    double xBegin, xEnd, yBegin, yEnd, h, X, Y;
    QVector<double> x, y;
    int N;

private slots:
    void digits_numbers();

private slots:
    void del_line();

private slots:
    void functions();

private slots:
    void calculate();

private slots:
    void add_graphic(const char *c_my_str, char *out_str);

    void on_bCredit_clicked();
    void on_bDeposit_clicked();
};
#endif // MAINWINDOW_H
