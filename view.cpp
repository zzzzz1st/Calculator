#include "view.h"
#include <iostream>
View::View(Model* m, Controller* c, QLabel *v) {
    model = m;
    model->addObserver(this);
    controller = c;
    view = v;
}
View::~View() {
    model->removeObserver(this);
}
void View::update() {
    float value = controller->calculate();
    QString s;
    view->setText(s.setNum(value));
}
