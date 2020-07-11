#include "calculator.h"
#include "ui_calculator.h"
#include<QObject>

Calculator::Calculator(Controller *c, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
    , controller(c)
{
    ui->setupUi(this);
        qmax = (ui->maxValue);
        qmin = (ui->minValue);
        qsum = (ui->sumValue);
        qmedian = (ui->medianValue);
        qtable = (ui->tableWidget);
    ui->statusbar->showMessage("Please insert a number...");
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_tableWidget_itemChanged(QTableWidgetItem *item)
{
controller->itemChanged(item);
}

QTableWidget *Calculator::getQtable()
{
    return qtable;
}

QLabel *Calculator::getQmedian()
{
    return qmedian;
}

QLabel *Calculator::getQsum()
{
    return qsum;
}

QLabel *Calculator::getQmin(){
    return qmin;
}

QLabel *Calculator::getQmax()
{
    return qmax;
}
