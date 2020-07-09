#include "model.h"

Model::Model(){

    for (int i = 0 ; i < 4 ; i++){
        for (int j = 0 ; j < 4 ; j++)
        dataset[i][j]=0;
    }
}

float Model::getDataset(int i, int j){
    return dataset[i][j];
}

void Model::setDataset(int i,int j, float v) {
    dataset[i][j] = v;
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
