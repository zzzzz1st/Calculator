QT += testlib
QT += widgets
CONFIG += qt warn_on depend_includepath testcase
TEMPLATE = app
SOURCES = tst_calculatortest.cpp
INCLUDEPATH += ../
LIBS += -L$$PWD/.. -llibCalculator
