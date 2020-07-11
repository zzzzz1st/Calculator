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
    QString row = QInputDialog::getText(NULL, "Initializing...", "Number of rows:");
    QString column = QInputDialog::getText(NULL, "Initializing...", "Number of columns:");
    if (row.toUInt()>100 && column.toUInt()>100){
        QMessageBox error;
        error.critical(0,"Error","High dimension matrix. matrix will be resized to 4x4");
        row.setNum(4);
        column.setNum(4);
    }
    Model model(row.toUInt(),column.toUInt());
    Controller controller(&model);
    Calculator w(&controller);
    w.getQtable()->setRowCount(row.toUInt());
    w.getQtable()->setColumnCount(column.toUInt());
    Max max(&model, w.getQmax());
    Min min(&model, w.getQmin());
    Sum sum(&model, w.getQsum());
    Median median(&model, w.getQmedian());
    w.show();
    return a.exec();
}
