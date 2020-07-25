#ifndef MAX_H
#define MAX_H
#include <Observer.h>
#include <model.h>
#include <QLabel>
#include <formula.h>

//this class can access the model recources.

class Max : public Observer, public Formula {

public:

    Max(Model *m, QLabel *v);
    virtual void update() override;
    virtual float calculate() override;

    virtual ~Max();

private:
    Model *model;
    QLabel *qlabel;


};

#endif // MAX_H
