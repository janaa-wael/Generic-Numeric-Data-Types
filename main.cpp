#include <iostream>
#include "Numeric.hpp"
#include "IntNumeric.hpp"
#include "FloatNumeric.hpp"
#include "DoubleNumeric.hpp"
#include "Complex.hpp"
#include <vector>
#include <algorithm>
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
    cout << (n3)->getValue() << endl;
    n3 = n4->divide(n2);
    cout << (n3)->getValue() << endl;
    n3 = n1->add(n2);
    cout << (n3)->getValue() << endl;
    n3 = n1->multiply(n2);
    cout << (n3)->getValue() << endl;
    n3 = n1->divide(n2);
    cout << (n3)->getValue() << endl;
    n3 = *n1 + *n4;
    cout << (n3)->getValue() << endl;
    n3 = *n1 - *n4;
    cout << (n3)->getValue() << endl; 
    Numeric* n5 = new IntNumeric(3);
    n3 = *n5 - *n1;
    cout << (n2)->getValue() << endl;
    n2 = n4;
    cout << (dynamic_cast<FloatNumeric*>(n2))->getValue() << endl;
    FloatNumeric* n6 = dynamic_cast<FloatNumeric*>(n2);
    Numeric* n7 = new Complex(1.3,5);
    cout << "Complex:" << endl;
    cout << (n7)->getValue() << endl;
    n3 = n1->add(n7);
    cout << (n3)->getValue() << endl;
    vector<Numeric*> v;
    v.push_back(n1);
    v.push_back(n2);
    v.push_back(n3);
    v.push_back(n4);
    for(int i = 0; i < 4 ; i++)
    {
        cout << "Loop " << i+1 << ":" << endl;
        cout << v[i]->getValue() << endl;
    }
    sort(v.begin(), v.end(), NumericComparator());
    for(int i = 0; i < 4 ; i++)
    {
        cout << "Loop " << i+1 << ":" << endl;
        cout << v[i]->getValue() << endl;
    }
}