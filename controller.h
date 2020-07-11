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
     Controller(Model *m);
     void itemChanged(QTableWidgetItem *item);

private:
     Model *model;
     std::list<Observer*> observers;
};

#endif // CONTROLLER_H
