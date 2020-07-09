#include "sum.h"

Sum::Sum(Model *m) : Controller(m){}

float Sum::calculate() {
    float sum = 0;
        for (int i = 0 ; i < 4 ; i++){
            for (int j = 0 ; j < 4 ; j++)
            sum += model->getDataset(i,j);
        }
        return sum;
}

