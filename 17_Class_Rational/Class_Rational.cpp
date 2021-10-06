#include "Class_Rational.h"

Rational::Rational()
{
    R_sign = 1;
    R_integer_part = 0;
    R_numerator = 0;
    R_denominator = 1;
}

Rational::Rational(int sign, int int_part, int numerator, int denominator) {
    assert(denominator != 0);
    assert(sign == 1 || sign == -1);
    R_sign = sign;
    R_integer_part = int_part;
    R_numerator = numerator;
    R_denominator = denominator;
    Mixed_Fraction();
}

void Rational::Mixed_Fraction() {
    Integer_Part();
    Cancellation();
}

void Rational::Integer_Part() {
    if (R_numerator >= R_denominator) {
        R_integer_part += (R_numerator / R_denominator);
        R_numerator %= R_denominator;
    }
}

int Rational::Greatest_Common_Divisor(int num, int den) {
    int difference = num - den;
    int divisor;

    if (difference == 0) {
        return num;
    }

    if (difference < 0) {
        difference = -difference;
        divisor = Greatest_Common_Divisor(num, difference);
    }

    if (difference > 0) {
        divisor = Greatest_Common_Divisor(den, difference);
    }

    return divisor;
}

void Rational::Cancellation() {

    if (R_numerator != 0) {

        int Greatest_CD = Greatest_Common_Divisor(abs(R_numerator), abs(R_denominator));

        if (Greatest_CD != 1) {
            R_numerator = R_numerator / Greatest_CD;
            R_denominator = R_denominator / Greatest_CD;
        }

        if (R_denominator < 0) {
            R_denominator *= -1;
            R_numerator *= -1;
        }
    }
}

//Rational::~Rational() {
//    std::cout << (*this) << " is destroyed" << std::endl;
//}

Rational operator+(const Rational &A, const Rational &B) {
    Rational Sum;

    Sum.R_numerator = A.R_sign * (A.R_integer_part * A.R_denominator + A.R_numerator) * B.R_denominator + B.R_sign * (B.R_integer_part * B.R_denominator + B.R_numerator) * A.R_denominator;
    Sum.R_denominator = A.R_denominator * B.R_denominator;

    if(Sum.R_numerator < 0)
    {
        Sum.R_numerator *= -1;
        Sum.R_sign = -1;
    }
    Sum.Mixed_Fraction();
    return Sum;
}

Rational operator*(const Rational &A, const Rational &B) {
    Rational Product;

    Product.R_numerator = A.R_sign * (A.R_integer_part * A.R_denominator + A.R_numerator) * B.R_sign * (B.R_integer_part * B.R_denominator + B.R_numerator);
    Product.R_denominator = A.R_denominator * B.R_denominator;

    if(Product.R_numerator < 0)
    {
        Product.R_numerator *= -1;
        Product.R_sign = -1;
    }

    Product.Mixed_Fraction();
    return Product;
}

std::ostream &operator<<(std::ostream &out, const Rational &rational) {

    if (rational.R_sign < 0) {
        out << "-";
    }

    if (rational.R_integer_part != 0) {
        out << rational.R_integer_part << " ";
    }

    if (rational.R_numerator != 0){
        out << rational.R_numerator << "/" << rational.R_denominator;
    }

    if (rational.R_integer_part == 0 && rational.R_numerator == 0) {
        out << "0";
    }

    return out;
}


