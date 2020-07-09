#include "median.h"
#include <vector>
#include <algorithm>

Median::Median(Model *m) : Controller(m){}

float Median::calculate() {
   std::vector <float> vtmp;
   for (int i = 0 ; i < 4 ; i++){
       for (int j = 0 ; j <4 ; j++)
           vtmp.push_back(model->getDataset(i,j));
   }
   std::sort(vtmp.begin(), vtmp.end());
   return (vtmp[7]+vtmp[8])/2;
}
