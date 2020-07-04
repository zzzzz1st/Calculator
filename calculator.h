#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class Calculator; }
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    void notifyObservers();
    float maxCalc();
    float minCalc();
    float sumCalc();
    float medianCalc();
    ~Calculator();

    //Setter and Getter For Unit Testing

    QLineEdit *getQsubs(int i);

    QLabel *getQobs(int i);

    float getValue(int i) const;

private slots:

    void on_var0_textChanged(const QString &arg1);

    void on_var1_textChanged(const QString &arg1);

    void on_var2_textChanged(const QString &arg1);

    void on_var3_textChanged(const QString &arg1);

    void on_var4_textChanged(const QString &arg1);

    void on_var5_textChanged(const QString &arg1);

    void on_var6_textChanged(const QString &arg1);

    void on_var7_textChanged(const QString &arg1);

    void on_var8_textChanged(const QString &arg1);

    void on_var9_textChanged(const QString &arg1);

    void on_var10_textChanged(const QString &arg1);

    void on_var11_textChanged(const QString &arg1);

    void on_var12_textChanged(const QString &arg1);

    void on_var13_textChanged(const QString &arg1);

private:
    Ui::Calculator *ui;
    QVector<QLineEdit*> qsubs;
    QVector<QLabel*> qobs;
    std::vector <float> values;
};
#endif // CALCULATOR_H
