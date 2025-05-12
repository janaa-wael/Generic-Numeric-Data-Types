#include "IntNumeric.hpp"
#include "Numeric.hpp"
#include "FloatNumeric.hpp"
#include "DoubleNumeric.hpp"

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

int IntNumeric::getValue(void) const
{
    return value;
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
    if(type== NumericType::INT)
    {
        const IntNumeric* intNum = dynamic_cast<const IntNumeric*>(x);
        return new IntNumeric(intNum->getValue() + value);
    }
    else if(type == NumericType::FLOAT)
    {
        const FloatNumeric* floatNum = dynamic_cast<const FloatNumeric*>(x);
        return new FloatNumeric(floatNum->getValue() + value);
    }
    else if(type == NumericType::DOUBLE)
    {
        const DoubleNumeric* doubleNum = dynamic_cast<const DoubleNumeric*>(x);
        if (!doubleNum) {
            std::cerr << "Error: dynamic_cast to DoubleNumeric* failed!" << std::endl;
            return nullptr;
        }
        return new DoubleNumeric(doubleNum->getValue() + value);
    }
    else
    {
        std::cerr << "Invalid type for addition" << std::endl;
        return nullptr;
    }

}

Numeric* IntNumeric::subtract(const Numeric* x)
{
    const IntNumeric* intNum = dynamic_cast<const IntNumeric*>(x);
    return new IntNumeric(intNum->getValue() - value);
}
Numeric* IntNumeric::multiply(const Numeric* x)
{
    const IntNumeric* intNum = dynamic_cast<const IntNumeric*>(x);
    return new IntNumeric(intNum->getValue() * value);
}
Numeric* IntNumeric::divide(const Numeric* x)
{
    const IntNumeric* intNum = dynamic_cast<const IntNumeric*>(x);
    return new IntNumeric(intNum->getValue() * value);
}

bool IntNumeric::isLessThan(const Numeric* x)
{
    const IntNumeric* intNum = dynamic_cast<const IntNumeric*>(x);
    return (intNum->getValue() < value);
}

bool IntNumeric::isGreaterThan(const Numeric* x)
{
    const IntNumeric* intNum = dynamic_cast<const IntNumeric*>(x);
    return (intNum->getValue() > value);
}

bool IntNumeric::isEqual(const Numeric* x)
{
    const IntNumeric* intNum = dynamic_cast<const IntNumeric*>(x);
    return (intNum->getValue() > value);
}