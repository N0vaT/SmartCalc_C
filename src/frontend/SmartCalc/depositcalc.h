#ifndef DEPOSITCALC_H
#define DEPOSITCALC_H

#include <QWidget>

namespace Ui {
class DepositCalc;
}

class DepositCalc : public QWidget
{
    Q_OBJECT

public:
    explicit DepositCalc(QWidget *parent = nullptr);
    ~DepositCalc();

private:
    Ui::DepositCalc *ui;

private slots:
    void calculate();
};

#endif // DEPOSITCALC_H
