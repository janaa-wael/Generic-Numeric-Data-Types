#include "IntNumeric.hpp"
#include "Numeric.hpp"
IntNumeric::IntNumeric()
{

}

IntNumeric::IntNumeric(int v)
: value(v)
{

}
Numeric::NumericType IntNumeric::getType()
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
    const IntNumeric* intNum = dynamic_cast<const IntNumeric*>(x);
    return new IntNumeric(intNum->getValue() + value);
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