#include "sum.h"

Sum::Sum(Model *m, QLabel *v){
    model = m;
    model->addObserver(this);
    qlabel = v;
}

void Sum::update(){
    float sum = 0;
    int row = model->getRow();
    int column = model->getColumn();
        for (int i = 0 ; i < row ; i++){
            for (int j = 0 ; j < column ; j++)
            sum += model->getDataset(i,j);
        }
        qlabel->setNum(sum);
}

Sum::~Sum() {
    model->removeObserver(this);
}


