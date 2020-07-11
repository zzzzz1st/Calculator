#ifndef MAX_H
#define MAX_H
#include <Observer.h>
#include <model.h>
#include <QLabel>

//this class can access the model recources.

class Max : public Observer {

public:

    Max(Model *m, QLabel *v);
    virtual void update() override;
    virtual ~Max();

private:
    Model *model;
    QLabel *qlabel;


};

#endif // MAX_H
