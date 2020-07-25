#ifndef MEDIAN_H
#define MEDIAN_H
#include <Observer.h>
#include <model.h>
#include <QLabel>
#include <vector>
#include <algorithm>
#include <formula.h>


//this class can access the model recources.

class Median : public Observer, public Formula {

public:

    Median(Model *m, QLabel *v);
    virtual void update() override;
    virtual float calculate() override;
    virtual ~Median();

private:
    Model *model;
    QLabel *qlabel;


};
#endif // MEDIAN_H
