#ifndef MIN_H
#define MIN_H
#include <Observer.h>
#include <model.h>
#include <QLabel>
#include <formula.h>

//this class can access the model recources.

class Min : public Observer, public Formula {

public:

    Min(Model *m, QLabel *v);
    virtual void update() override;
    virtual float calculate() override;
    virtual ~Min();

private:
    Model *model;
    QLabel *qlabel;


};

#endif // MIN_H
