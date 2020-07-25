#include "model.h"

Model::Model(int c) : column(c){
    dataset = new float[column];

    for (int j = 0 ; j < column ; j++){
        dataset[j]=0;
    }
}

Model::~Model(){
    delete [] dataset;
}

float Model::getDataset(int i){
    return dataset[i];
}

void Model::setDataset(int i, float v) {
    dataset[i] = v;
    notify();
}
void Model::addObserver(Observer* o) {
    observers.push_back(o);
}
void Model::removeObserver(Observer* o) {
    observers.remove(o);
}
void Model::notify() {
    for (Observer* observer : observers)
        observer->update();
}

int Model::getColumn() const
{
    return column;
}
