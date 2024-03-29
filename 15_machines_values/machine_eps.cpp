#include <iostream>
#include <limits>

using namespace std;

int main() {
    float epsilon_f, zero_f, Mmin_f;
    double epsilon_d, zero_d, Mmin_d;
    long double epsilon_ld, zero_ld, Mmin_ld;

    //ALL FOR FLOAT

    epsilon_f = 1.0;


    while (1.0f + epsilon_f > 1.0f)
        epsilon_f = epsilon_f / 2.0f;

    cout << "Machine epsilon for float type: " << epsilon_f * 2.0f << endl;

    Mmin_f = 1.0;
    zero_f = 1.0;

    while (Mmin_f / 2.0f != 0) {
        zero_f = Mmin_f;
        Mmin_f = Mmin_f / 2.0f;
        //cout << zero_f << endl;
    }

    cout << "Machine zero for float: " << zero_f << endl;
    cout << "The difference of machine epsilon and zero: " << epsilon_f * 2.0f - zero_f << endl;

    float infmax_f = 2.1f;
    float almost_inf_f = 1.0f, infinity_f = 1.0f;
    int counter_max_f = 0, counter_notmax_f = -1;

    while (infmax_f > almost_inf_f) {
        almost_inf_f = infmax_f;
        infmax_f = infmax_f * 2.0f;
        counter_max_f++;
        counter_notmax_f++;
    }
    for (int i = 0; i < counter_notmax_f; i++) {
        infinity_f = infinity_f * 2.0f;
    }

    cout << "Max value for float type: " << (infinity_f - 0.5) * 2 << endl;

    float infmin_f = -2.1f;
    float almost_minus_inf_f = -1.0f, minus_infinity_f = -1.0f;
    int counter_min_f = 0, counter_notmin_f = -1;

    while (infmin_f < almost_minus_inf_f) {
        almost_minus_inf_f = infmin_f;
        infmin_f = infmin_f * 2.0f;
        counter_min_f++;
        counter_notmin_f++;
    }

    //cout << counter_notmin_f << endl;

    for (int t = 0; t < counter_notmin_f; t++) {
        minus_infinity_f = minus_infinity_f * 2.0f;
    }

    cout << "Min value for float type: " << (minus_infinity_f + 0.5) * 2 << endl << endl << endl;

    //ALL FOR DOUBLE

    epsilon_d = 1.0;

    while (1.0 + epsilon_d > 1.0)
        epsilon_d = epsilon_d / 2.0;


    cout << "Machine epsilon for double type: " << epsilon_d * 2.0 << endl;

    Mmin_d = 1.0;
    zero_d = 0.5;

    while (Mmin_d / 2.0 != 0) {
        zero_d = Mmin_d;
        Mmin_d = Mmin_d / 2.0;
        //cout << zero_d << endl;
    }

    cout << "Machine zero for double: " << zero_d << endl;
    cout << "The difference of machine epsilon and zero: " << epsilon_d * 2 - zero_d << endl;

    double infmax_d = 2.0;
    double almostinf_d = 1.0, infinity_d = 1.0;
    int counter_max_d = 0, counter_notmax_d = -1;

    while (infmax_d > almostinf_d) {
        almostinf_d = infmax_d;
        infmax_d = infmax_d * 2.0;
        counter_max_d++;
        counter_notmax_d++;

    }

    //cout << counter_notmax_d << endl;

    for (int t = 0; t < counter_notmax_d; t++) {
        infinity_d = infinity_d * 2.0;
    }

    cout << "Max value for double type: " << (infinity_d - 5e+300) * 2 << endl;

    double infmin_d = -2.1;
    double almost_minus_inf_d = -1.0, minus_infinity_d = -1.0;
    int counter_min_d = 0, counter_notmin_d = -1;

    while (infmin_d < almost_minus_inf_d) {
        almost_minus_inf_d = infmin_d;
        infmin_d = infmin_d * 2.0;
        counter_min_d++;
        counter_notmin_d++;
    }

    //cout << counter_notmin_d << endl;

    for (int t = 0; t < counter_notmin_d; t++) {
        minus_infinity_d = minus_infinity_d * 2.0;
    }

    cout << "Min value for double type: " << (minus_infinity_d + 5e+300) * 2 << endl << endl << endl;

    //ALL FOR LONG DOUBLE

    epsilon_ld = 1.0;

    while (1.0 + epsilon_ld > 1.0) {
        epsilon_ld = epsilon_ld / 2.0;
    }

    cout << "Machine epsilon for long double type: " << epsilon_ld * 2.0 << endl;

    Mmin_ld = 1.0;
    zero_ld = 0.9;

    while (Mmin_ld / 2.0 != 0) {
        zero_ld = Mmin_ld;
        Mmin_ld = Mmin_ld / 2.0;
        //cout << zero_ld << endl;
    }

    cout << "Machine zero for long double: " << zero_ld << endl;
    cout << "The difference of machine epsilon and zero: " << epsilon_ld * 2 - zero_ld << endl;

    long double infmax_ld = 2.1;
    long double almostinf_ld = 1.0, infinity_ld = 1.0;
    int counter_max_ld = 0, counter_notmax_ld = -1;

    while (infmax_ld > almostinf_ld) {
        almostinf_ld = infmax_ld;
        infmax_ld = infmax_ld * 2.0;
        counter_max_ld++;
        counter_notmax_ld++;
    }

    //cout << counter_notmax_ld << endl;

    for (int t = 0; t < counter_notmax_ld; t++) {
        infinity_ld = infinity_ld * 2.0;
    }

    cout << "Max value for long double type: " << infinity_ld << endl;


    long double infmin_ld = -2.1;
    long double almost_minus_inf_ld = -1.0, minus_infinity_ld = -1.0;
    int counter_min_ld = 0, counter_notmin_ld = -1;

    while (infmin_ld < almost_minus_inf_ld) {
        almost_minus_inf_ld = infmin_ld;
        infmin_ld = infmin_ld * 2.0;
        counter_min_ld++;
        counter_notmin_ld++;
    }

    //cout << counter_notmin_ld << endl;

    for (int t = 0; t < counter_notmin_ld; t++) {
        minus_infinity_ld = minus_infinity_ld * 2.0;
    }

    cout << "Min value for long double type: " << minus_infinity_ld  << endl << endl;

    // cout << numeric_limits<float>::max() << endl;
    // cout << numeric_limits<double>::max() << endl;        //used for checking
    // cout << numeric_limits<long double>::max() << endl;

    return 0;
}