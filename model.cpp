#include "model.h"

Model::Model(int r, int c) : row(r), column(c){
    dataset = new float[row*column];

    for (int i = 0 ; i < row*column ; i++){
        dataset[i]=0;
    }
}

Model::~Model(){
    delete [] dataset;
}

float Model::getDataset(int i, int j){
    return dataset[i*column+j];
}

void Model::setDataset(int i, int j, float v) {
    dataset[i*column+j] = v;
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

int Model::getRow() const
{
    return row;
}

int Model::getColumn() const
{
    return column;
}
