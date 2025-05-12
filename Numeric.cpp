#include <iostream>
#include "Numeric.hpp"

Numeric::Numeric()
{

}

Numeric* Numeric::operator+(const Numeric& other)
{
    return this->add(&other);
}
Numeric* Numeric::operator-(const Numeric& other)
{
    return this->subtract(&other);
}
Numeric* Numeric::operator*(const Numeric& other)
{
    return this->multiply(&other);
}
Numeric* Numeric::operator/(const Numeric& other)
{
    return this->divide(&other);
}