#include <iostream>
#include "INtNumeric.hpp"
#include "DoubleNumeric.hpp"
#include "FloatNumeric.hpp"

FloatNumeric::FloatNumeric()
: value(0)
{

}

FloatNumeric::FloatNumeric(float x)
: value(x)
{

}
Numeric::NumericType FloatNumeric::getType() const
{
    return NumericType::FLOAT;
}

float FloatNumeric::getValue(void) const
{
    return value;
}

int FloatNumeric::toInt() const
{
    return static_cast<int>(value);

}
float FloatNumeric::toFloat() const
{
    return static_cast<int>(value);
}
double FloatNumeric::toDouble() const
{
    return static_cast<int>(value);
}

Numeric* FloatNumeric::add(const Numeric* x)
{
    // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new FloatNumeric(value + dynamic_cast<const IntNumeric*>(x)->getValue());
        case NumericType::FLOAT:
            return new FloatNumeric(value + dynamic_cast<const FloatNumeric*>(x)->getValue());
        case NumericType::DOUBLE:
            return new DoubleNumeric(value + dynamic_cast<const DoubleNumeric*>(x)->getValue());
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}

Numeric* FloatNumeric::subtract(const Numeric* x)
{
    // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new FloatNumeric(value - dynamic_cast<const IntNumeric*>(x)->getValue());
        case NumericType::FLOAT:
            return new FloatNumeric(value - dynamic_cast<const FloatNumeric*>(x)->getValue());
        case NumericType::DOUBLE:
            return new DoubleNumeric(value - dynamic_cast<const DoubleNumeric*>(x)->getValue());
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}

Numeric* FloatNumeric::multiply(const Numeric* x)
{
    // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new FloatNumeric(value * dynamic_cast<const IntNumeric*>(x)->getValue());
        case NumericType::FLOAT:
            return new FloatNumeric(value * dynamic_cast<const FloatNumeric*>(x)->getValue());
        case NumericType::DOUBLE:
            return new DoubleNumeric(value * dynamic_cast<const DoubleNumeric*>(x)->getValue());
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}

Numeric* FloatNumeric::divide(const Numeric* x)
{
    // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new FloatNumeric(value / dynamic_cast<const IntNumeric*>(x)->getValue());
        case NumericType::FLOAT:
            return new FloatNumeric(value / dynamic_cast<const FloatNumeric*>(x)->getValue());
        case NumericType::DOUBLE:
            return new DoubleNumeric(value / dynamic_cast<const DoubleNumeric*>(x)->getValue());
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}

bool FloatNumeric::isLessThan(const Numeric* x)
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

bool FloatNumeric::isGreaterThan(const Numeric* x)
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

bool FloatNumeric::isEqual(const Numeric* x)
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

