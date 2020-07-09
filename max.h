#ifndef MAX_H
#define MAX_H
#include <controller.h>

class Max : public Controller {

public:
    Max(Model *m);
    float calculate() override;

};

#endif // MAX_H
