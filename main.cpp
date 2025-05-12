#include <iostream>
#include "Numeric.hpp"
#include "IntNumeric.hpp"
#include "FloatNumeric.hpp"
#include "DoubleNumeric.hpp"
#include <iomanip>
using namespace std;

int main()
{
    Numeric* n1 = new DoubleNumeric(3.13543);
    Numeric* n2 = new IntNumeric(4);
    Numeric* n4 = new FloatNumeric(5.4);
    Numeric* n3 = n2->subtract(n1);
    cout << n2->isEqual(n1) << endl;
    cout << n2->isEqual(n2) << endl;
    cout << std::fixed << std::setprecision(5);
    cout << (dynamic_cast<DoubleNumeric*>(n3))->getValue() << endl;
    n3 = n4->divide(n2);
    cout << (dynamic_cast<FloatNumeric*>(n3))->getValue() << endl;
    n3 = n1->add(n2);
    cout << (dynamic_cast<DoubleNumeric*>(n3))->getValue() << endl;
    n3 = n1->multiply(n2);
    cout << (dynamic_cast<DoubleNumeric*>(n3))->getValue() << endl;
    n3 = n1->divide(n2);
    cout << (dynamic_cast<DoubleNumeric*>(n3))->getValue() << endl;
    n3 = *n1 + *n4;
    cout << (dynamic_cast<DoubleNumeric*>(n3))->getValue() << endl;
}