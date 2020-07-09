#include "max.h"

Max::Max(Model *m) : Controller(m){}

float Max::calculate() {
    float m = model->getDataset(0,0);
        for (int i = 0; i < 4 ; i++){
            for (int j = 0; j < 4 ; j++)
                if (model->getDataset(i, j) > m)
                    m = model->getDataset(i, j);
        }
        return m;
}
