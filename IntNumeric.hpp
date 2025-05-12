#ifndef INT_NUMERIC_HPP
#define INT_NUMERIC_HPP

#include "Numeric.hpp"

class IntNumeric : public Numeric{
    int value;
public:
    IntNumeric();
    IntNumeric(int v);
    IntNumeric(const Numeric* other);
    IntNumeric& operator=(const Numeric* other);
    virtual double getValue(void) const;
    virtual int toInt() const;
    virtual float toFloat() const;
    virtual double toDouble() const;

    virtual NumericType getType() const;
    virtual Numeric* add(const Numeric* x);
    virtual Numeric* subtract(const Numeric* x);
    virtual Numeric* multiply(const Numeric* x);
    virtual Numeric* divide(const Numeric* x);
    virtual bool isLessThan(const Numeric* x);
    virtual bool isGreaterThan(const Numeric* x);
    virtual bool isEqual(const Numeric* x);

    //virtual Numeric* operator-(const Numeric& other) = 0;
    //virtual Numeric* operator*(const Numeric& other) = 0;
    //virtual Numeric* operator/(const Numeric& other) = 0;
};

#endif