#include "calculator.h"
#include "ui_calculator.h"
#include<QObject>
#include <iostream>
#include <QMessageBox>

Calculator::Calculator(Model *m, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
    , model(m)
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
    std::cout << item->row() << " " << item->column() << std::endl;
    int i = item->row();
    int j = item->column();
    bool number;
    item->text().toFloat(&number);
    if (!number){
        QMessageBox error;
        error.critical(0,"Error","Please insert a float number !");
        error.setFixedSize(500,200);
        model -> setDataset(i, j,0);
        QString tmp;
        item->setText(tmp.setNum(0));
        return;
    }

    model -> setDataset(i, j, item->text().toFloat());
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
