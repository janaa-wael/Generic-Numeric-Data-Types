#include "IntNumeric.hpp"
#include "Numeric.hpp"
#include "FloatNumeric.hpp"
#include "DoubleNumeric.hpp"
#include "Complex.hpp"

IntNumeric::IntNumeric()
{

}

IntNumeric::IntNumeric(int v)
: value(v)
{

}
Numeric::NumericType IntNumeric::getType() const
{
    return NumericType::INT;
}

double IntNumeric::getValue(void) const
{
    return static_cast<double>(value);
}

int IntNumeric::toInt() const
{
    return static_cast<int>(value);
}
float IntNumeric::toFloat() const
{
    return static_cast<float>(value);
}

double IntNumeric::toDouble() const
{
    return static_cast<double>(value);
}

Numeric* IntNumeric::add(const Numeric* x) 
{
    // Check the type of x and perform addition accordingly
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new IntNumeric(value + dynamic_cast<const IntNumeric*>(x)->getValue());
        case NumericType::FLOAT:
            return new FloatNumeric(value + dynamic_cast<const FloatNumeric*>(x)->getValue());
        case NumericType::DOUBLE:
            return new DoubleNumeric(value + dynamic_cast<const DoubleNumeric*>(x)->getValue());
        case NumericType::COMPLEX:  
            return new Complex(value + dynamic_cast<const Complex*>(x)->getValue(), 0);
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}

Numeric* IntNumeric::subtract(const Numeric* x)
{
        NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new IntNumeric(value - dynamic_cast<const IntNumeric*>(x)->getValue());
        case NumericType::FLOAT:
            return new FloatNumeric(value - dynamic_cast<const FloatNumeric*>(x)->getValue());
        case NumericType::DOUBLE:
            return new DoubleNumeric(value - dynamic_cast<const DoubleNumeric*>(x)->getValue());
        case NumericType::COMPLEX:  
            return new Complex(value - dynamic_cast<const Complex*>(x)->getValue(), 0);
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}
Numeric* IntNumeric::multiply(const Numeric* x)
{
        NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new IntNumeric(value * dynamic_cast<const IntNumeric*>(x)->getValue());
        case NumericType::FLOAT:
            return new FloatNumeric(value * dynamic_cast<const FloatNumeric*>(x)->getValue());
        case NumericType::DOUBLE:
            return new DoubleNumeric(value * dynamic_cast<const DoubleNumeric*>(x)->getValue());
        case NumericType::COMPLEX:
            return new Complex(value * dynamic_cast<const Complex*>(x)->getValue(), 0);
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}
Numeric* IntNumeric::divide(const Numeric* x)
{
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return new IntNumeric(value / dynamic_cast<const IntNumeric*>(x)->getValue());
        case NumericType::FLOAT:
            return new FloatNumeric(value / dynamic_cast<const FloatNumeric*>(x)->getValue());
        case NumericType::DOUBLE:
            return new DoubleNumeric(value / dynamic_cast<const DoubleNumeric*>(x)->getValue());
        case NumericType::COMPLEX:
            return new Complex(value / dynamic_cast<const Complex*>(x)->getValue(), 0);
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return nullptr;
    }
}

bool IntNumeric::isLessThan(const Numeric* x)
{
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return value < dynamic_cast<const IntNumeric*>(x)->getValue();
        case NumericType::FLOAT:
            return value < dynamic_cast<const FloatNumeric*>(x)->getValue();
        case NumericType::DOUBLE:
            return value < dynamic_cast<const DoubleNumeric*>(x)->getValue();
        case NumericType::COMPLEX:
            return value < dynamic_cast<const Complex*>(x)->getValue();
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return false;
    }
}

bool IntNumeric::isGreaterThan(const Numeric* x)
{
    NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return value > dynamic_cast<const IntNumeric*>(x)->getValue();
        case NumericType::FLOAT:
            return value > dynamic_cast<const FloatNumeric*>(x)->getValue();
        case NumericType::DOUBLE:
            return value > dynamic_cast<const DoubleNumeric*>(x)->getValue();
        case NumericType::COMPLEX:
            return value > dynamic_cast<const Complex*>(x)->getValue();
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return false;
    }
}

IntNumeric::IntNumeric(const Numeric* other)
{
    if(this != other)
    {
        value = other->toInt();
    }
}
IntNumeric& IntNumeric::operator=(const Numeric* other)
{
    if(this != other)
    {
        value = other->toInt();
    }
    return *this;
}


bool IntNumeric::isEqual(const Numeric* x)
{
            NumericType type = x->getType();
    switch(type)
    {
        case NumericType::INT:
            return value == dynamic_cast<const IntNumeric*>(x)->getValue();
        case NumericType::FLOAT:
            return value == dynamic_cast<const FloatNumeric*>(x)->getValue();
        case NumericType::DOUBLE:
            return value == dynamic_cast<const DoubleNumeric*>(x)->getValue();
        case NumericType::COMPLEX:
            return value == dynamic_cast<const Complex*>(x)->getValue();
        default:
            std::cerr << "Invalid type for addition" << std::endl;
            return false;
    }
}


