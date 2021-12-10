#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

double
Distribution(double x1, double x2, double a1, double a2, double Sigma_one, double Sigma_two, double Sigma_one_two) {
    return 1 / ((2 * M_PI * Sigma_one * Sigma_two) * sqrt(1 - pow(Sigma_one_two, 2.0))) *
           exp(-1 / (2 * (1 - pow(Sigma_one_two, 2.0))) * (pow((x1 - a1), 2.0) / pow(Sigma_one, 2.0) -
                                                           2.0 * Sigma_one_two * (x1 - a1) * (x2 - a2) /
                                                           (Sigma_one * Sigma_two) +
                                                           pow((x2 - a2), 2.0) / pow(Sigma_two, 2.0)));
}

int main() {
    ofstream coordinates_sin, coordinates_x_sin;
    coordinates_sin.open("sin_x.dat");
    double step, x, y;
    x = 0.0;

    step = (2.0 * M_PI) / 100.0;

    coordinates_sin << "TITLE = \"Y = sin(X)\"" << endl;
    coordinates_sin << R"(VARIABLES = "X", "Y")" << endl;

    for (int i = 0; i < 100; i++) {
        x = x + i * step;
        coordinates_sin << x << ", " << sin(x) << endl;
        x = 0;
    }

    coordinates_sin.close();

    coordinates_x_sin.open("x_sin_x.dat");

    step = (100.0 - (-100.0)) / 200.0;
    coordinates_x_sin << "TITLE = \"Y = X * sin(X)\"" << endl;
    coordinates_x_sin << R"(VARIABLES = "X", "Y")" << endl;

    x = -100;

    for (int i = 0; i < 200; i++) {
        coordinates_x_sin << x << ", " << x * sin(x) << endl;
        x += step;
    }
    coordinates_x_sin.close();

    ofstream coordinates_sin_x_sin_y;
    coordinates_sin_x_sin_y.open("sin_x_sin_y.dat");

    coordinates_sin_x_sin_y << "TITLE = \"Z = sin(X) * sin(Y)\"" << endl;
    coordinates_sin_x_sin_y << R"(VARIABLES = "X", "Y", "Z")" << endl;
    coordinates_sin_x_sin_y << R"(ZONE T = "ZONE1", I = 100 J = 100, F = POINT)" << endl;

    step = (2.0 * M_PI) / 100.0;
    x = 0.0;
    y = 0.0;

    for (int i = 0; i < 100; i++) {
        for (int t = 0; t < 100; t++) {
            coordinates_sin_x_sin_y << x << ", " << y << ", " << sin(x) * sin(y) << endl;
            y += step;
        }
        y = 0.0;
        x += step;
    }
    coordinates_sin_x_sin_y.close();

    ofstream normal_distribution; // Released for a certain case
    x = -3.0;
    y = -3.0;

    step = 6.0/100;

    normal_distribution.open("nd.dat");

    normal_distribution << "TITLE = \"Normal distribution\"" << endl;
    normal_distribution << R"(VARIABLES = "X", "Y", "Z")" << endl;
    normal_distribution << R"(ZONE T = "ZONE1", I = 100 J = 100, F = POINT)" << endl;

    double Sigma_1, Sigma_2, Sigma_12, a1, a2;
    cout << "Put sigma1, sigma2, sigma12 < 1, a1, a2: " << endl;
    cin >> Sigma_1 >> Sigma_2 >> Sigma_12 >> a1 >> a2;
    Sigma_1 < 0 ? Sigma_1 = (-1) * Sigma_1 : Sigma_1;
    Sigma_2 < 0 ? Sigma_2 = (-1) * Sigma_2 : Sigma_2;

    for (int i = 0; i < 100; i++) {
        for (int t = 0; t < 100; t++) {
            normal_distribution << x << ", " << y << ", " << Distribution(x, y, a1, a2, Sigma_1, Sigma_2, Sigma_12) << endl;
            y += step;
        }
        y = -3.0;
        x += step;
    }
    normal_distribution.close();

    std::cout << "freedom" << std::endl;
    return 0;
}
