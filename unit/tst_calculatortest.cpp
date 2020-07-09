#include <QtTest/QtTest>
#include <calculator.h>
#include <QStatusBar>
class CalculatorTest : public QObject
{
    Q_OBJECT

private slots:
    void test_case1();
    void test_case2();
    void test_case3();
    void test_case4();
    void test_case5();
    void test_case6();
    void test_case7();
    void test_case8();
    void test_case9();

};

void CalculatorTest::test_case1()
{
        Calculator c;
        QLineEdit *ql0 = c.getQsubs(0);
        ql0->setText("12");
        QVERIFY(ql0->text().toFloat() == 12);
}

void CalculatorTest::test_case2()
{
    Calculator c;
    QLineEdit *ql1 = c.getQsubs(1);
    ql1->setText("3");
    QVERIFY(c.getValue(1) == 3);
}

void CalculatorTest::test_case3()
{
    Calculator c;
    QLineEdit *ql2 = c.getQsubs(2);
    QLabel *ql = c.getQobs(0);
    ql2->setText("1000");
     QVERIFY(ql->text().toFloat() == 1000);
}

void CalculatorTest::test_case4()
{
    Calculator c;
    QLineEdit *ql3 = c.getQsubs(3);
    QLabel *ql = c.getQobs(2);
    ql3->setText("3");
     QVERIFY(ql->text().toFloat() == 0);
}

void CalculatorTest::test_case5()
{
    Calculator c;
    QLineEdit *ql4 = c.getQsubs(4);
    QLabel *ql = c.getQobs(3);
    ql4->setText("4");
     QVERIFY(ql->text().toFloat() == 0.5);
}

void CalculatorTest::test_case6()
{
    Calculator c;
    QStatusBar *qs =c.statusBar();
    QLineEdit *ql5 = c.getQsubs(5);
    ql5->setText("4");
    QCOMPARE(qs->currentMessage(), QString("Slot5 has been changed"));
}

void CalculatorTest::test_case7()
{
    Calculator c;
    QStatusBar *qs =c.statusBar();
    QCOMPARE(qs->currentMessage(), QString("Please insert a number..."));
}

void CalculatorTest::test_case8()
{
    Calculator c;
     QLabel *ql = c.getQobs(0);
     QVERIFY(ql->text().toFloat() == 6);
     ql = c.getQobs(1);
     QVERIFY(ql->text().toFloat() == -7);
     ql = c.getQobs(2);
     QVERIFY(ql->text().toFloat() == -7);
     ql = c.getQobs(3);
     QVERIFY(ql->text().toFloat() == -0.5);



}

void CalculatorTest::test_case9()
{
    Calculator c;
    QLineEdit *qli = c.getQsubs(0);
    QVERIFY(qli->text().toFloat() == -7);
    qli = c.getQsubs(1);
    QVERIFY(qli->text().toFloat() == -6);
    qli = c.getQsubs(5);
    QVERIFY(qli->text().toFloat() == -2);
    qli = c.getQsubs(10);
    QVERIFY(qli->text().toFloat() == 3);
}

QTEST_MAIN(CalculatorTest)

#include "tst_calculatortest.moc"
