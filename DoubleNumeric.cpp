#include <iostream>
#include "DoubleNumeric.hpp"
#include "FloatNumeric.hpp"
#include "IntNumeric.hpp"
#include "Numeric.hpp"
DoubleNumeric::DoubleNumeric()
: value(0)
{

}
DoubleNumeric::DoubleNumeric(double x)
: value(x)
{

}
double DoubleNumeric::getValue(void) const
{
    return value;
}
Numeric::NumericType DoubleNumeric::getType() const
{
    return NumericType::DOUBLE;
}
int DoubleNumeric::toInt() const
{
    return static_cast<int>(value);
}
float DoubleNumeric::toFloat() const
{
    return static_cast<float>(value);
}

double DoubleNumeric::toDouble() const
{
    return static_cast<double>(value);
}

Numeric* DoubleNumeric::add(const Numeric* x)
{
        // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new DoubleNumeric(value + dynamic_cast<const IntNumeric*>(x)->getValue());
        case NumericType::FLOAT:
            return new DoubleNumeric(value + dynamic_cast<const FloatNumeric*>(x)->getValue());
        case NumericType::DOUBLE:
            return new DoubleNumeric(value + dynamic_cast<const DoubleNumeric*>(x)->getValue());
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}

Numeric* DoubleNumeric::subtract(const Numeric* x)
{
    // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new DoubleNumeric(value - dynamic_cast<const IntNumeric*>(x)->getValue());
        case NumericType::FLOAT:
            return new DoubleNumeric(value - dynamic_cast<const FloatNumeric*>(x)->getValue());
        case NumericType::DOUBLE:
            return new DoubleNumeric(value - dynamic_cast<const DoubleNumeric*>(x)->getValue());
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}
Numeric* DoubleNumeric::multiply(const Numeric* x)
{
    // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new DoubleNumeric(value * dynamic_cast<const IntNumeric*>(x)->getValue());
        case NumericType::FLOAT:
            return new DoubleNumeric(value * dynamic_cast<const FloatNumeric*>(x)->getValue());
        case NumericType::DOUBLE:
            return new DoubleNumeric(value * dynamic_cast<const DoubleNumeric*>(x)->getValue());
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}

Numeric* DoubleNumeric::divide(const Numeric* x)
{
    // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new DoubleNumeric(value / dynamic_cast<const IntNumeric*>(x)->getValue());
        case NumericType::FLOAT:
            return new DoubleNumeric(value / dynamic_cast<const FloatNumeric*>(x)->getValue());
        case NumericType::DOUBLE:
            return new DoubleNumeric(value / dynamic_cast<const DoubleNumeric*>(x)->getValue());
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}
bool DoubleNumeric::isLessThan(const Numeric* x)
{
    // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return value < dynamic_cast<const IntNumeric*>(x)->getValue();
        case NumericType::FLOAT:
            return value < dynamic_cast<const FloatNumeric*>(x)->getValue();
        case NumericType::DOUBLE:
            return value < dynamic_cast<const DoubleNumeric*>(x)->getValue();
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return false;
    }
}
bool DoubleNumeric::isGreaterThan(const Numeric* x)
{
    // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return value > dynamic_cast<const IntNumeric*>(x)->getValue();
        case NumericType::FLOAT:
            return value > dynamic_cast<const FloatNumeric*>(x)->getValue();
        case NumericType::DOUBLE:
            return value > dynamic_cast<const DoubleNumeric*>(x)->getValue();
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return false;
    }
}
bool DoubleNumeric::isEqual(const Numeric* x)
{
    // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return value == dynamic_cast<const IntNumeric*>(x)->getValue();
        case NumericType::FLOAT:
            return value == dynamic_cast<const FloatNumeric*>(x)->getValue();
        case NumericType::DOUBLE:
            return value == dynamic_cast<const DoubleNumeric*>(x)->getValue();
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return false;
    }
}

Numeric* DoubleNumeric::operator+(const Numeric& other)
{
    return this->add(&other);
}