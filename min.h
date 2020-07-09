#ifndef MIN_H
#define MIN_H
#include <controller.h>

class Min : public Controller {

public:
    Min(Model *m);
    float calculate() override;

};

#endif // MIN_H
