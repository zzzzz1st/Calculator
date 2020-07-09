#ifndef MEDIAN_H
#define MEDIAN_H
#include <controller.h>

class Median : public Controller {

public:
    Median(Model *m);
    float calculate() override;

};

#endif // MEDIAN_H
