#ifndef FORMULA_H
#define FORMULA_H

#include<model.h>


class Controller
{
public:
     Controller(Model* m);
     virtual float calculate() = 0;

protected:
     Model *model;
};

#endif // FORMULA_H
