#ifndef SUM_H
#define SUM_H
#include <controller.h>

class Sum : public Controller {

public:
    Sum(Model *m);
    float calculate() override;

};

#endif // SUM_H
