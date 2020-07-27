#ifndef FORMULA_H
#define FORMULA_H

class Formula {

public:
    virtual ~Formula() {}
    virtual float calculate() = 0;
};

#endif // FORMULA_H
