#include "Class_Rational.h"
using namespace std;

int input_sign() {

    int sign;
    bool flag = true;
    while (flag) {
        cout << "Enter a sign of the rational: 1 or -1." << endl;
        cin >> sign;
        try {
            if (cin.fail())
                throw 1;
            if(sign < -1 || sign > 1 || sign == 0)
                throw 2;
            flag = false;
        }
        catch (int exception) {
            switch(exception) {
                case 1: cin.clear();
                    cin.ignore(32767, '\n');
                    cout << "Invalid input." << endl;
                    break;
                case 2: cin.clear();
                    cin.ignore(32767, '\n');
                    cout << "Invalid input. A sign must be 1 or -1." << endl;
                    break;
            }
        }
    }
    return sign;
}

int input_int() {

    int int_part;
    bool flag = true;
    while (flag) {
        cout << "Enter an integer part of the rational." << endl;
        cin >> int_part;
        try {
            if (cin.fail())
                throw 3;
            if(int_part < 0)
                throw 4;
            flag = false;
        }
        catch (int exception) {
            switch (exception) {
                case 3: cin.clear();
                    cin.ignore(32767, '\n');
                    cout << "Invalid input. Enter an integer number." << endl;
                    break;
                case 4: cin.clear();
                    cin.ignore(32767, '\n');
                    cout << "Invalid input. Enter an integer positive number." << endl;
                    break;
            }
        }
    }
    int_part = static_cast<int>(int_part); // type conversion into int if the input is not integer
    return int_part;
}

int input_num() {

    int int_num;
    bool flag = true;
    while (flag) {
        cout << "Enter a numerator of the rational." << endl;
        cin >> int_num;
        try {
            if (cin.fail())
                throw 5;
            if (int_num < 0)
                throw 6;
            flag = false;
        }
        catch (int exception) {
            switch (exception) {
                case 5: cin.clear();
                    cin.ignore(32767, '\n');
                    cout << "Invalid input. Enter an integer number." << endl;
                    break;
                case 6: cin.clear();
                    cin.ignore(32767, '\n');
                    cout << "Invalid input. Enter an integer positive number." << endl;
                    break;
            }
        }
    }
    int_num = static_cast<int>(int_num); // type conversion into int if the input is not integer
    return int_num;
}

int input_den() {

    int int_denum;
    bool flag = true;
    while (flag) {
        cout << "Enter a denumerator of the rational." << endl;
        cin >> int_denum;
        try {
            if (cin.fail())
                throw 7;
            if (int_denum < 0 || int_denum == 0)
                throw 8;
            flag = false;
        }
        catch (int exception) {
            switch (exception) {
                case 7: cin.clear();
                    cin.ignore(32767, '\n');
                    cout << "Invalid input. Enter an integer number." << endl;
                    break;
                case 8: cin.clear();
                    cin.ignore(32767, '\n');
                    cout << "Invalid input. Enter an integer positive number." << endl;
                    break;
            }
        }
    }
    int_denum = static_cast<int>(int_denum); // type conversion into int if the input is not integer
    return int_denum;
}

int main() {
    int a_sign, a_int, a_num, a_den;
    int b_sign, b_int, b_num, b_den;

    a_sign = input_sign();
    a_int = input_int();
    a_num = input_num();
    a_den = input_den();

    b_sign = input_sign();
    b_int = input_int();
    b_num = input_num();
    b_den = input_den();

    Rational A(a_sign, a_int, a_num, a_den), B(b_sign, b_int, b_num, b_den);

    cout << A << " + " << B << " = " << A + B << endl;
    cout << A << " * " << B << " = " << A * B << endl;
    return 0;
}