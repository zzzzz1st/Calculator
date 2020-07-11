#ifndef MIN_H
#define MIN_H
#include <Observer.h>
#include <model.h>
#include <QLabel>

//this class can access the model recources.

class Min : public Observer {

public:

    Min(Model *m, QLabel *v);
    virtual void update() override;
    virtual ~Min();

private:
    Model *model;
    QLabel *qlabel;


};

#endif // MIN_H
