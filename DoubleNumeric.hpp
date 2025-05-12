#include <iostream>
#include "Numeric.hpp"
using namespace std;

class DoubleNumeric : public Numeric{
    double value;
public:
    DoubleNumeric();
    DoubleNumeric(double x);
    double getValue(void) const;
    virtual NumericType getType() ;
    virtual Numeric* add(const Numeric* x);
    virtual Numeric* subtract(const Numeric* x) ;
    virtual Numeric* multiply(const Numeric* x);
    virtual Numeric* divide(const Numeric* x);
    virtual bool isLessThan(const Numeric* x);
    virtual bool isGreaterThan(const Numeric* x);
    virtual bool isEqual(const Numeric* x);
};