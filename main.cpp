#include "calculator.h"
#include <iostream>
#include <QApplication>
#include <QTableWidgetItem>
#include <max.h>
#include <min.h>
#include <sum.h>
#include <median.h>
#include <view.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/images/calculator_main.ico"));
    Model model;
    Calculator w(&model);
    Max max(&model);
    Min min(&model);
    Sum sum(&model);
    Median median(&model);
    View maxview(&model, &max, (w.getQmax()));
    View minview(&model, &min, (w.getQmin()));
    View sumview(&model, &sum, (w.getQsum()));
    View medianview(&model, &median, (w.getQmedian()));
    w.show();
    return a.exec();
}
