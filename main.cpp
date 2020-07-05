#include "calculator.h"
#include <iostream>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/images/calculator_main.ico"));
    Calculator w;
    w.show();
    return a.exec();
}
