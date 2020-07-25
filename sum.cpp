#include "sum.h"

Sum::Sum(Model *m, QLabel *v){
    model = m;
    model->addObserver(this);
    qlabel = v;
}

void Sum::update(){
    float sum = calculate();
    qlabel->setNum(sum);
}

float Sum::calculate(){
    float sum = 0;
    int column = model->getColumn();
            for (int j = 0 ; j < column ; j++)
                sum += model->getDataset(j);
            return sum;
}

Sum::~Sum() {
    model->removeObserver(this);
}


