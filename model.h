#ifndef MODEL_H
#define MODEL_H
#include <Subject.h>
#include <list>

// The model is controlled by controller and it can update the observers.

class Model : Subject {

public:
    Model(int c);
    ~Model();
    float getDataset(int i);
    void setDataset(int i, float v);
    virtual void addObserver(Observer* o);
    virtual void removeObserver(Observer* o);
    virtual void notify();
    int getColumn() const;

private:
    int column;
    float *dataset;
    std::list<Observer*> observers;
};

#endif // MODEL_H
