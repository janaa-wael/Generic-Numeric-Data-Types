#include <iostream>
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
    const FloatNumeric* floatNum = dynamic_cast<const FloatNumeric*>(x);
    return new FloatNumeric(floatNum->getValue() + value);
}

Numeric* FloatNumeric::subtract(const Numeric* x)
{
    const FloatNumeric* floatNum = dynamic_cast<const FloatNumeric*>(x);
    return new FloatNumeric(floatNum->getValue() - value);
}

Numeric* FloatNumeric::multiply(const Numeric* x)
{
    const FloatNumeric* floatNum = dynamic_cast<const FloatNumeric*>(x);
    return new FloatNumeric(floatNum->getValue() * value);
}

Numeric* FloatNumeric::divide(const Numeric* x)
{
    const FloatNumeric* floatNum = dynamic_cast<const FloatNumeric*>(x);
    return new FloatNumeric(floatNum->getValue() / value);
}

bool FloatNumeric::isLessThan(const Numeric* x)
{
    const FloatNumeric* floatNum = dynamic_cast<const FloatNumeric*>(x);
    return (floatNum->getValue() < value);
}

bool FloatNumeric::isGreaterThan(const Numeric* x)
{
    const FloatNumeric* floatNum = dynamic_cast<const FloatNumeric*>(x);
    return (floatNum->getValue() > value);
}

bool FloatNumeric::isEqual(const Numeric* x)
{
    const FloatNumeric* floatNum = dynamic_cast<const FloatNumeric*>(x);
    return (floatNum->getValue() == value);
}