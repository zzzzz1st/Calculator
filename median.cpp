#include "median.h"

Median::Median(Model *m, QLabel *v){
    model = m;
    model->addObserver(this);
    qlabel = v;
}

void Median::update(){
   std::vector <float> vtmp;
   int row = model->getRow();
   int column = model->getColumn();
   for (int i = 0 ; i < row ; i++){
       for (int j = 0 ; j < column ; j++)
           vtmp.push_back(model->getDataset(i,j));
   }
   std::sort(vtmp.begin(), vtmp.end());
   float tmp;
   int size = vtmp.size();
   if((row*column)%2 == 0)
       tmp = (vtmp[(size-1)/2]+vtmp[size/2])/2;
   else
       tmp = (vtmp[(size/2)]);
   qlabel->setNum(tmp);
}

Median::~Median() {
    model->removeObserver(this);
}
