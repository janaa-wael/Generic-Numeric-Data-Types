#ifndef NUMERIC_HPP
#define NUMERIC_HPP


class Numeric{
public:
enum class NumericType {
    INT,
    FLOAT,
    DOUBLE,
    COMPLEX,
    SHORT,
    UNSIGNED,
    CHAR
};
    Numeric();
    virtual NumericType getType() const = 0;
    virtual int toInt() const = 0;
    virtual float toFloat() const = 0;
    virtual double toDouble() const = 0;
    virtual double getValue(void) const = 0;
    virtual Numeric* add(const Numeric* x) = 0;
    virtual Numeric* subtract(const Numeric* x) = 0;
    virtual Numeric* multiply(const Numeric* x) = 0;
    virtual Numeric* divide(const Numeric* x) = 0;
    virtual bool isLessThan(const Numeric* x) = 0;
    virtual bool isGreaterThan(const Numeric* x) = 0;
    virtual bool isEqual(const Numeric* x) = 0;
    virtual Numeric* operator+(const Numeric& other);
    virtual Numeric* operator-(const Numeric& other) ;
    virtual Numeric* operator*(const Numeric& other) ;
    virtual Numeric* operator/(const Numeric& other) ;
    virtual ~Numeric() = default;    
};

#endif