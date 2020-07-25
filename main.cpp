#include "calculator.h"
#include <QApplication>
#include <QTableWidgetItem>
#include <QInputDialog>
#include <QMessageBox>
#include <max.h>
#include <min.h>
#include <sum.h>
#include <median.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/images/calculator_main.ico"));
    QString column = QInputDialog::getText(NULL, "Initializing...", "Number of columns:");
    if (column.toUInt()>10000){
        QMessageBox error;
        error.critical(0,"Error","High dimension set. set will be resized to 4");
        column.setNum(4);
    }
    Model modelmax(column.toUInt());
    Model modelmin(column.toUInt());
    Model modelsum(column.toUInt());
    Model modelmedian(column.toUInt());
    Controller controller(&modelmax, &modelmin, &modelsum, &modelmedian);
    Calculator w(&controller);
    w.getQtable()->setColumnCount(column.toUInt());
    Max max(&modelmax, w.getQmax());
    Min min(&modelmin, w.getQmin());
    Sum sum(&modelsum, w.getQsum());
    Median median(&modelmedian, w.getQmedian());
    w.show();
    return a.exec();
}
