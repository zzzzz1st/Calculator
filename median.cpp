#include "median.h"

Median::Median(Model *m, QLabel *v){
    model = m;
    model->addObserver(this);
    qlabel = v;
}

void Median::update(){

    float tmp = calculate();
    qlabel->setNum(tmp);
}

float Median::calculate(){

    std::vector <float> vtmp;
    int column = model->getColumn();
        for (int j = 0 ; j < column ; j++)
            vtmp.push_back(model->getDataset(j));
    std::sort(vtmp.begin(), vtmp.end());
    float tmp;
    int size = vtmp.size();
    if((column)%2 == 0)
        tmp = (vtmp[(size)/2]+vtmp[(size-1)/2])/2;
    else
        tmp = (vtmp[(size/2)]);
    return tmp;

}

Median::~Median() {
    model->removeObserver(this);
}
