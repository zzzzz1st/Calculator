#ifndef VIEW_H
#define VIEW_H
#include <Observer.h>
#include <model.h>
#include <controller.h>
#include <QLabel>

class View : Observer {

public:
    View(Model *m, Controller *c, QLabel *v);
    virtual ~View();
    //TODO void displayTextField(int i) {}
    virtual void update();

private:
    Model *model;
    Controller *controller;
    QLabel *view;

};


#endif // VIEW_H
