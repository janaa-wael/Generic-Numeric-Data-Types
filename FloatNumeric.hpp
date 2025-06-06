#include <iostream>
#include "Numeric.hpp"
using namespace std;

class FloatNumeric : public Numeric{
    float value;
public:
    FloatNumeric();
    FloatNumeric(float x);
    FloatNumeric(const Numeric* other);
    FloatNumeric& operator=(const Numeric* other);
    virtual NumericType getType() const ;
    virtual double getValue(void) const;
    virtual int toInt() const;
    virtual float toFloat() const;
    virtual double toDouble() const;

    virtual Numeric* add(const Numeric* x) ;
    virtual Numeric* subtract(const Numeric* x) ;
    virtual Numeric* multiply(const Numeric* x);
    virtual Numeric* divide(const Numeric* x);
    virtual bool isLessThan(const Numeric* x);
    virtual bool isGreaterThan(const Numeric* x);
    virtual bool isEqual(const Numeric* x);


};