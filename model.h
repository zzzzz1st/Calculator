#ifndef MODEL_H
#define MODEL_H
#include <Subject.h>
#include <list>

// The model is controlled by controller and it can update the observers.

class Model : Subject {

public:
    Model(int r, int c);
    ~Model();
    float getDataset(int i, int j);
    void setDataset(int i,int j, float v);
    virtual void addObserver(Observer* o);
    virtual void removeObserver(Observer* o);
    virtual void notify();
    int getRow() const;
    int getColumn() const;

private:
    int row;
    int column;
    float *dataset;
    std::list<Observer*> observers;
};

#endif // MODEL_H
