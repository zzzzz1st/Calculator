#include "calculator.h"
#include "ui_calculator.h"
#include<QObject>
#include <iostream>

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);

    for (int i = 0 ; i < ui->gridLayout->count() ; i++){ //putting qline pointers into an array
        qsubs.push_back((QLineEdit*)ui->gridLayout->itemAt(i)->widget());
        values.push_back(qsubs.last()->text().toFloat());
    }


    qobs.push_back(ui->maxValue);
    qobs.push_back(ui->minValue);
    qobs.push_back(ui->sumValue);
    qobs.push_back(ui->medianValue);

    ui->statusbar->showMessage("Please insert a number...");
}

float Calculator::maxCalc(){
    float m = values[0];
    for (int i = 0; i < 13 ; i++)
        if (values[i+1] > m)
            m = values[i+1];
    return m;
}

float Calculator::minCalc(){
    float m = values[0];
    for (int i = 0; i < 13 ; i++)
        if (values[i+1] < m)
            m = values[i+1];
    return m;
}

float Calculator::sumCalc(){
    float sum = 0;
    for (int i = 0 ; i < 14 ; i++)
        sum += values[i];
    return sum;
}

float Calculator::medianCalc(){

    std::vector <float> vtmp (values.begin(), values.end());
    std::sort(vtmp.begin(), vtmp.end());
    return (vtmp[6]+vtmp[7])/2;
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::notifyObservers(){

    float maxtmp = maxCalc();
    float mintmp = minCalc();
    float sumtmp = sumCalc();
    float mediantmp = medianCalc();
    QString b;
    qobs[0]->setText(b.setNum(maxtmp));
    qobs[1]->setText(b.setNum(mintmp));
    qobs[2]->setText(b.setNum(sumtmp));
    qobs[3]->setText(b.setNum(mediantmp));

}

void Calculator::on_var0_textChanged(const QString &arg1)
{
    ui->statusbar->showMessage("Slot0 has been changed");
    values[0]=arg1.toFloat();
    notifyObservers();
}

void Calculator::on_var1_textChanged(const QString &arg1)
{
    ui->statusbar->showMessage("Slot1 has been changed");
    values[1]=arg1.toFloat();
    notifyObservers();
}

void Calculator::on_var2_textChanged(const QString &arg1)
{
    ui->statusbar->showMessage("Slot2 has been changed");
    values[2]=arg1.toFloat();
    notifyObservers();
}

void Calculator::on_var3_textChanged(const QString &arg1)
{
    ui->statusbar->showMessage("Slot3 has been changed");
    values[3]=arg1.toFloat();
    notifyObservers();
}

void Calculator::on_var4_textChanged(const QString &arg1)
{
    ui->statusbar->showMessage("Slot4 has been changed");
    values[4]=arg1.toFloat();
    notifyObservers();
}

void Calculator::on_var5_textChanged(const QString &arg1)
{
    ui->statusbar->showMessage("Slot5 has been changed");
    values[5]=arg1.toFloat();
    notifyObservers();
}

void Calculator::on_var6_textChanged(const QString &arg1)
{
    ui->statusbar->showMessage("Slot6 has been changed");
    values[6]=arg1.toFloat();
    notifyObservers();
}

void Calculator::on_var7_textChanged(const QString &arg1)
{
    ui->statusbar->showMessage("Slot7 has been changed");
    values[7]=arg1.toFloat();
    notifyObservers();
}

void Calculator::on_var8_textChanged(const QString &arg1)
{
    ui->statusbar->showMessage("Slot8 has been changed");
    values[8]=arg1.toFloat();
    notifyObservers();
}

void Calculator::on_var9_textChanged(const QString &arg1)
{
    ui->statusbar->showMessage("Slot9 has been changed");
    values[9]=arg1.toFloat();
    notifyObservers();
}

void Calculator::on_var10_textChanged(const QString &arg1)
{
    ui->statusbar->showMessage("Slot10 has been changed");
    values[10]=arg1.toFloat();
    notifyObservers();
}

void Calculator::on_var11_textChanged(const QString &arg1)
{
    ui->statusbar->showMessage("Slot11 has been changed");
    values[11]=arg1.toFloat();
    notifyObservers();
}

void Calculator::on_var12_textChanged(const QString &arg1)
{
    ui->statusbar->showMessage("Slot12 has been changed");
    values[12]=arg1.toFloat();
    notifyObservers();
}

void Calculator::on_var13_textChanged(const QString &arg1)
{
    ui->statusbar->showMessage("Slot13 has been changed");
    values[13]=arg1.toFloat();
    notifyObservers();
}

//Getter functions For Unit Testing


float Calculator::getValue(int i) const
{
    return values[i];
}

QLabel *Calculator::getQobs(int i)
{
    return qobs [i];
}

QLineEdit *Calculator::getQsubs(int i){
    return qsubs[i];
}
