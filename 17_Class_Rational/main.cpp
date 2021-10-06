#include "Class_Rational.h"

int main() {
    Rational A(1,1,1,4), B(-1,5,1,1);
    std::cout << A << " + " << B << " = " << A + B << std::endl;
    std::cout << A << " * " << B << " = " << A * B << std::endl;
    return 0;
}