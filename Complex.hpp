#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <iostream>
#include "Numeric.hpp"
using namespace std;

class Complex : public Numeric{
private: 
    double real;
    double imag;    
public:
    Complex();
    Complex(double real, double imag);
    Complex(const Numeric* other);
    Complex& operator=(const Numeric* other);
    virtual double getValue(void) const;
    virtual NumericType getType() const;

    virtual int toInt() const;
    virtual float toFloat() const;
    virtual double toDouble() const;

    virtual Numeric* add(const Numeric* x);
    virtual Numeric* subtract(const Numeric* x);
    virtual Numeric* multiply(const Numeric* x);
    virtual Numeric* divide(const Numeric* x);
    virtual bool isLessThan(const Numeric* x);
    virtual bool isGreaterThan(const Numeric* x);
    virtual bool isEqual(const Numeric* x);
};

#endif