//
// Created by tassiio on 29.11.2021.
//

#include "Graphic.h"

Circle::Circle(double Centre_X, double Centre_Y, double Radius) {
    C_Centre_X = Centre_X;
    C_Centre_Y = Centre_Y;
    C_Radius = Radius;
}

void Circle::G_Move(double Length, double Angle) {
    C_Centre_X = C_Centre_X + Length * cos(Angle * M_PI / 180.0);
    C_Centre_Y = C_Centre_Y + Length * sin(Angle * M_PI / 180.0);
}

void Circle::G_Scale(double Coefficient) {
    C_Radius = C_Radius * Coefficient;
}

void Circle::G_Rotate(double Angle) {
    C_Centre_X = C_Centre_X * 1.0;
    C_Centre_Y = C_Centre_Y * 1.0;
    C_Radius = C_Radius * 1.0;
}

void Circle::G_Show() {
    std::cout << "Circle: centre(" << C_Centre_X << "," << C_Centre_Y << "), radius: " << C_Radius << std::endl;
}

Square::Square(double Centre_X, double Centre_Y, double Angle, double Side) {
    S_Centre_X = Centre_X;
    S_Centre_Y = Centre_Y;
    S_Angle = Angle;
    S_Side = Side;
    S_Diagonal = S_Side * sqrt(2.0);
    // координаты вершин в начальном положении (ромб)
    S_Coordinates_Of_Vertices[0] = S_Centre_X + S_Diagonal / 2.0 * cos(S_Angle * M_PI / 180.0); //x01
    S_Coordinates_Of_Vertices[1] = S_Centre_Y + S_Diagonal / 2.0 * sin(S_Angle * M_PI / 180.0); //y01
    S_Coordinates_Of_Vertices[2] = S_Centre_X - S_Diagonal / 2.0 * sin(S_Angle * M_PI / 180.0); //x02
    S_Coordinates_Of_Vertices[3] = S_Centre_Y + S_Diagonal / 2.0 * cos(S_Angle * M_PI / 180.0); //y02
    S_Coordinates_Of_Vertices[4] = S_Centre_X - S_Diagonal / 2.0 * cos(S_Angle * M_PI / 180.0); //x03
    S_Coordinates_Of_Vertices[5] = S_Centre_Y - S_Diagonal / 2.0 * sin(S_Angle * M_PI / 180.0); //y03
    S_Coordinates_Of_Vertices[6] = S_Centre_X + S_Diagonal / 2.0 * sin(S_Angle * M_PI / 180.0); //x04
    S_Coordinates_Of_Vertices[7] = S_Centre_Y - S_Diagonal / 2.0 * cos(S_Angle * M_PI / 180.0); //y04
}

void Square::G_Move(double Length, double Angle) {

    for (int i = 0; i < 8; i += 2) {
        S_Coordinates_Of_Vertices[i] =
                S_Coordinates_Of_Vertices[i] + Length * cos(Angle * M_PI / 180.0); // преобразование иксов
        S_Coordinates_Of_Vertices[i + 1] =
                S_Coordinates_Of_Vertices[i + 1] + Length * sin(Angle * M_PI / 180.0); // преобразование игреков
    }
    S_Centre_X = S_Centre_X + Length * cos(Angle * M_PI / 180.0);
    S_Centre_Y = S_Centre_Y + Length * sin(Angle * M_PI / 180.0);
}

void Square::G_Rotate(double Angle) {

    for (int i = 0; i < 8; i = i + 2) {
        double xi, yi;
        xi = S_Coordinates_Of_Vertices[i];
        yi = S_Coordinates_Of_Vertices[i + 1];
        S_Coordinates_Of_Vertices[i] = xi * cos(Angle * M_PI / 180.0) -
                                       yi * sin(Angle * M_PI / 180.0); // преобразование поворота для x
        S_Coordinates_Of_Vertices[i + 1] = xi * sin(Angle * M_PI / 180.0) +
                                           yi * cos(Angle * M_PI / 180.0); // преобразование поворота для y
    }
    S_Angle = Angle;
}

void Square::G_Scale(double Coefficient) {

    double New_Diagonal;
    New_Diagonal = S_Side * Coefficient * sqrt(2.0);

    S_Coordinates_Of_Vertices[0] = S_Centre_X + New_Diagonal / 2.0 * cos(S_Angle * M_PI / 180.0);
    S_Coordinates_Of_Vertices[1] = S_Centre_Y + New_Diagonal / 2.0 * sin(S_Angle * M_PI / 180.0);
    S_Coordinates_Of_Vertices[2] = S_Centre_X - New_Diagonal / 2.0 * sin(S_Angle * M_PI / 180.0);
    S_Coordinates_Of_Vertices[3] = S_Centre_Y + New_Diagonal / 2.0 * cos(S_Angle * M_PI / 180.0);
    S_Coordinates_Of_Vertices[4] = S_Centre_X - New_Diagonal / 2.0 * cos(S_Angle * M_PI / 180.0);
    S_Coordinates_Of_Vertices[5] = S_Centre_Y - New_Diagonal / 2.0 * sin(S_Angle * M_PI / 180.0);
    S_Coordinates_Of_Vertices[6] = S_Centre_X + New_Diagonal / 2.0 * sin(S_Angle * M_PI / 180.0);
    S_Coordinates_Of_Vertices[7] = S_Centre_Y - New_Diagonal / 2.0 * cos(S_Angle * M_PI / 180.0);

}

void Square::G_Show() {
    std::cout << "Square: coordinates of vertices: " << std::endl;
    std::cout << "1. (" << S_Coordinates_Of_Vertices[0] << "," << S_Coordinates_Of_Vertices[1] << ");" << std::endl;
    std::cout << "2. (" << S_Coordinates_Of_Vertices[2] << "," << S_Coordinates_Of_Vertices[3] << ");" << std::endl;
    std::cout << "3. (" << S_Coordinates_Of_Vertices[4] << "," << S_Coordinates_Of_Vertices[5] << ");" << std::endl;
    std::cout << "4. (" << S_Coordinates_Of_Vertices[6] << "," << S_Coordinates_Of_Vertices[7] << ");" << std::endl;
}

