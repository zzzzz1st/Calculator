#include <controller.h>

Controller::Controller(Model* m) : model(m){}

void Controller::itemChanged(QTableWidgetItem *item){
    std::cout << item->row() << " " << item->column() << std::endl;
    int i = item->row();
    int j = item->column();
    bool number;
    item->text().toFloat(&number);
    if (!number){
        QMessageBox error;
        error.critical(0,"Error","Please insert a float number !");
        error.setFixedSize(500,200);
        model -> setDataset(i,j,0);
        QString tmp;
        item->setText(tmp.setNum(0));
        return;
    }

    model -> setDataset(i,j,item->text().toFloat());
}
