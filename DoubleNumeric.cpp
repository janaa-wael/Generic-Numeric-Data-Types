#include <iostream>
#include "DoubleNumeric.hpp"
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
    const DoubleNumeric* doubleNum = dynamic_cast<const DoubleNumeric*>(x);
    return new DoubleNumeric(doubleNum->getValue() + value);

}
Numeric* DoubleNumeric::subtract(const Numeric* x)
{
    const DoubleNumeric* doubleNum = dynamic_cast<const DoubleNumeric*>(x);
    return new DoubleNumeric(doubleNum->getValue() - value);
}
Numeric* DoubleNumeric::multiply(const Numeric* x)
{
    const DoubleNumeric* doubleNum = dynamic_cast<const DoubleNumeric*>(x);
    return new DoubleNumeric(doubleNum->getValue() * value);
}

Numeric* DoubleNumeric::divide(const Numeric* x)
{
    const DoubleNumeric* doubleNum = dynamic_cast<const DoubleNumeric*>(x);
    return new DoubleNumeric(doubleNum->getValue() / value);
}
bool DoubleNumeric::isLessThan(const Numeric* x)
{
    const DoubleNumeric* doubleNum = dynamic_cast<const DoubleNumeric*>(x);
    return (doubleNum->getValue() < value);
}
bool DoubleNumeric::isGreaterThan(const Numeric* x)
{
    const DoubleNumeric* doubleNum = dynamic_cast<const DoubleNumeric*>(x);
    return (doubleNum->getValue() > value);
}
bool DoubleNumeric::isEqual(const Numeric* x)
{
    const DoubleNumeric* doubleNum = dynamic_cast<const DoubleNumeric*>(x);
    return (doubleNum->getValue() == value);
}