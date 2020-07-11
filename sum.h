#ifndef SUM_H
#define SUM_H
#include <Observer.h>
#include <model.h>
#include <QLabel>

//this class can access the model recources.

class Sum : public Observer {

public:

    Sum(Model *m, QLabel *v);
    virtual void update() override;
    virtual ~Sum();

private:
    Model *model;
    QLabel *qlabel;


};

#endif // SUM_H
