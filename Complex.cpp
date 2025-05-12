#include <iostream>
#include "Complex.hpp"
#include "Numeric.hpp"
#include "IntNumeric.hpp"
#include "FloatNumeric.hpp"
#include "DoubleNumeric.hpp"
#include <cmath>
using namespace std;    

Complex::Complex()
{

}
Complex::Complex(double real, double imag)
: real(real), imag(imag)    
{

}
    // Complex(const Numeric* other)
    // {
    //     if(this != other)
    //     {
    //         real = 
    //     }
    // }

Complex& Complex::operator=(const Numeric* other)
{

}
double Complex::getValue(void) const
{
    return sqrt(real * real + imag * imag);
}
Numeric::NumericType Complex::getType() const
{
    return NumericType::COMPLEX;
}
int Complex::toInt() const
{
    return static_cast<int>(real);
}
float Complex::toFloat() const
{
    return static_cast<float>(real);
}
double Complex::toDouble() const
{
    return static_cast<double>(real);
}

Numeric* Complex::add(const Numeric* x)
{
    // Check the type of x and perform addition accordingly
    Numeric::NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new Complex(real + dynamic_cast<const IntNumeric*>(x)->getValue(), imag);
        case NumericType::FLOAT:
            return new Complex(real + dynamic_cast<const FloatNumeric*>(x)->getValue(), imag);
        case NumericType::DOUBLE:
            return new Complex(real + dynamic_cast<const DoubleNumeric*>(x)->getValue(), imag);
        case NumericType::COMPLEX: 
            return new Complex(real + dynamic_cast<const Complex*>(x)->getValue(), imag); 
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}
Numeric* Complex::subtract(const Numeric* x)
{
    // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new Complex(real - dynamic_cast<const IntNumeric*>(x)->getValue(), imag);
        case NumericType::FLOAT:
            return new Complex(real - dynamic_cast<const FloatNumeric*>(x)->getValue(), imag);
        case NumericType::DOUBLE:
            return new Complex(real - dynamic_cast<const DoubleNumeric*>(x)->getValue(), imag);
        case NumericType::COMPLEX:
            return new Complex(real - dynamic_cast<const Complex*>(x)->getValue(), imag);
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}
Numeric* Complex::multiply(const Numeric* x)
{
    // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new Complex(real * dynamic_cast<const IntNumeric*>(x)->getValue(), imag);
        case NumericType::FLOAT:
            return new Complex(real * dynamic_cast<const FloatNumeric*>(x)->getValue(), imag);
        case NumericType::DOUBLE:
            return new Complex(real * dynamic_cast<const DoubleNumeric*>(x)->getValue(), imag);
        case NumericType::COMPLEX:
            return new Complex(real * dynamic_cast<const Complex*>(x)->getValue(), imag);
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}
Numeric* Complex::divide(const Numeric* x)
{
    // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new Complex(real / dynamic_cast<const IntNumeric*>(x)->getValue(), imag);
        case NumericType::FLOAT:
            return new Complex(real / dynamic_cast<const FloatNumeric*>(x)->getValue(), imag);
        case NumericType::DOUBLE:
            return new Complex(real / dynamic_cast<const DoubleNumeric*>(x)->getValue(), imag);
        case NumericType::COMPLEX:
            return new Complex(real / dynamic_cast<const Complex*>(x)->getValue(), imag);
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}
bool Complex::isLessThan(const Numeric* x)
    {
        NumericType type = x->getType();
        switch(type)
        {
            case NumericType::INT:
                return real < dynamic_cast<const IntNumeric*>(x)->getValue();
            case NumericType::FLOAT:
                return real < dynamic_cast<const FloatNumeric*>(x)->getValue();
            case NumericType::DOUBLE:
                return real < dynamic_cast<const DoubleNumeric*>(x)->getValue();
            case NumericType::COMPLEX:
                return real < dynamic_cast<const Complex*>(x)->getValue();
            default:
                std::cerr << "Invalid type for addition" << std::endl;
                return false;
        }
    }
bool Complex::isGreaterThan(const Numeric* x)
{
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return real > dynamic_cast<const IntNumeric*>(x)->getValue();
        case NumericType::FLOAT:
            return real > dynamic_cast<const FloatNumeric*>(x)->getValue();
        case NumericType::DOUBLE:
            return real > dynamic_cast<const DoubleNumeric*>(x)->getValue();
        case NumericType::COMPLEX:
            return real > dynamic_cast<const Complex*>(x)->getValue();
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return false;
    }
}
bool Complex::isEqual(const Numeric* x)
{
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return real == dynamic_cast<const IntNumeric*>(x)->getValue();
        case NumericType::FLOAT:
            return real == dynamic_cast<const FloatNumeric*>(x)->getValue();
        case NumericType::DOUBLE:
            return real == dynamic_cast<const DoubleNumeric*>(x)->getValue();
        case NumericType::COMPLEX:
            return real == dynamic_cast<const Complex*>(x)->getValue();
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return false;
    }
}