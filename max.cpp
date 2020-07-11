#include "max.h"

Max::Max(Model *m, QLabel *v){
    model = m;
    model->addObserver(this);
    qlabel = v;
}

void Max::update(){
    float m = model->getDataset(0,0);
    int row = model->getRow();
    int column = model->getColumn();
        for (int i = 0; i < row ; i++){
            for (int j = 0; j < column ; j++)
                if (model->getDataset(i, j) > m)
                    m = model->getDataset(i, j);
        }
        qlabel->setNum(m);
}

Max::~Max() {
    model->removeObserver(this);
}
