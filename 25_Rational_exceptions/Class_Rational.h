//
//
//

#ifndef OOP_CLASS_RATIONAL_H
#define OOP_CLASS_RATIONAL_H
#include <iostream>
#include <cassert>
#include <string>

class Rational {
public:
    int R_sign;
    int R_integer_part;
    int R_numerator;
    int R_denominator;

private:
    int Greatest_Common_Divisor(int num, int den);
    void Cancellation();
    void Mixed_Fraction();
    void Integer_Part();

public:
    Rational();
    Rational(int, int, int = 0, int = 1);
    //~Rational();

    friend Rational operator+(const Rational &A, const Rational &B);
    friend Rational operator*(const Rational &A, const Rational &B);

    //friend std::istream &operator >> (std::istream &ist, const Rational&);
    friend std::ostream &operator << (std::ostream &out, const Rational&);

};

#endif //OOP_CLASS_RATIONAL_H
