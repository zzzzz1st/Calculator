#include "min.h"

Min::Min(Model *m, QLabel *v){
    model = m;
    model->addObserver(this);
    qlabel = v;
}
void Min::update() {
    float m = calculate();
    qlabel->setNum(m);
}

float Min::calculate(){
    int column = model->getColumn();
    float m = model->getDataset(0);
            for (int j = 0; j < column ; j++)
                if (model->getDataset(j) < m)
                    m = model->getDataset(j);
            return m;
}

Min::~Min() {
    model->removeObserver(this);
}
