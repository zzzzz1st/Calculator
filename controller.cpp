#include <controller.h>

Controller::Controller(Model *modelmax, Model *modelmin, Model *modelsum, Model *modelmedian){
    models.push_back(modelmax);
    models.push_back(modelmin);
    models.push_back(modelsum);
    models.push_back(modelmedian);
}

void Controller::itemChanged(QTableWidgetItem *item){
    int i = item->row();
    int j = item->column();
    bool number;
    item->text().toFloat(&number);
    if (!number){
        QMessageBox error;
        error.critical(0,"Error","Please insert a float number !");
        error.setFixedSize(500,200);
        models[i] -> setDataset(j,0);
        QString tmp;
        item->setText(tmp.setNum(0));
        return;
    }

    models[i] -> setDataset(j, item->text().toFloat());
}
