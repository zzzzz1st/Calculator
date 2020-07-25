#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <iostream>
#include <QMessageBox>

//Controller knows how to handle a changed text. it controlls the application.

#include<model.h>
#include <QTableWidgetItem>


class Controller
{
public:
     Controller(Model *modelmax, Model *modelmin, Model *modelsum, Model *modelmedian);
     void itemChanged(QTableWidgetItem *item);

private:
     std::list<Observer*> observers;
     std::vector<Model*> models;
};

#endif // CONTROLLER_H
