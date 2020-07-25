#include "max.h"

Max::Max(Model *m, QLabel *v){
    model = m;
    model->addObserver(this);
    qlabel = v;
}

void Max::update(){
    float m = calculate();
        qlabel->setNum(m);
}

float Max::calculate(){
    float m = model->getDataset(0);
    int column = model->getColumn();
        for (int j = 0; j < column ; j++){
                if (model->getDataset(j) > m)
                    m = model->getDataset(j);
        }
        return m;

}

Max::~Max() {
    model->removeObserver(this);
}
