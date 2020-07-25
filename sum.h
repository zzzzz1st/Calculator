#ifndef SUM_H
#define SUM_H
#include <Observer.h>
#include <model.h>
#include <QLabel>
#include <formula.h>

//this class can access the model recources.

class Sum : public Observer, public Formula {

public:

    Sum(Model *m, QLabel *v);
    virtual void update() override;
    virtual float calculate() override;
    virtual ~Sum();

private:
    Model *model;
    QLabel *qlabel;


};

#endif // SUM_H
