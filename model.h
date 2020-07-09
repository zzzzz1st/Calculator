#ifndef MODEL_H
#define MODEL_H

#include <Subject.h>
#include <list>
#include <vector>

class Model : Subject {

public:
    Model();
    float getDataset(int i, int j);
    void setDataset(int i, int j, float v);
    virtual void addObserver(Observer* o);
    virtual void removeObserver(Observer* o);
    virtual void notify();
private:
    float dataset [4][4];
    std::list<Observer*> observers;
};

#endif // MODEL_H
