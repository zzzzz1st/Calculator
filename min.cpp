#include "min.h"

Min::Min(Model *m, QLabel *v){
    model = m;
    model->addObserver(this);
    qlabel = v;
}
void Min::update() {
    int row = model->getRow();
    int column = model->getColumn();
    float m = model->getDataset(0,0);
        for (int i = 0; i < row ; i++){
            for (int j = 0; j < column ; j++)
                if (model->getDataset(i, j) < m)
                    m = model->getDataset(i, j);
        }
        qlabel->setNum(m);
}

Min::~Min() {
    model->removeObserver(this);
}
