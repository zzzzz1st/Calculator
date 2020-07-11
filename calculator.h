#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QTableWidget>
#include <QLabel>
#include <controller.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(Controller *c, QWidget *parent = nullptr);
    ~Calculator();

    QLabel *getQmax();

    QLabel *getQmin();

    QLabel *getQsum();

    QLabel *getQmedian();

    QTableWidget *getQtable();

private slots:
    void on_tableWidget_itemChanged(QTableWidgetItem *item);

private:
    Ui::Calculator *ui;
    QLabel *qmax;
    QLabel *qmin;
    QLabel *qsum;
    QLabel *qmedian;
    QTableWidget *qtable;
    Controller *controller;
};
#endif // CALCULATOR_H
