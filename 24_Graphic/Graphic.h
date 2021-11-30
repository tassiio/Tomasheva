//
// Created by tassiio on 29.11.2021.
//

#ifndef INC_24_GRAPHIC_GRAPHIC_H
#define INC_24_GRAPHIC_GRAPHIC_H
#include <iostream>
#include <cassert>
#include <cmath>

class Graphic {
public:
    virtual void G_Move(double, double) = 0;
    virtual void G_Rotate(double) = 0;
    virtual void G_Scale(double) = 0;
    virtual void G_Show() = 0;
};

class Circle:public Graphic {
private:
    double C_Centre_X;
    double C_Centre_Y;
    double C_Radius;
public:
    Circle(double, double, double);
    void G_Rotate(double) override;
    void G_Move(double, double) override;
    void G_Scale(double) override;
    void G_Show() override;
};

class Square:public Graphic {
private:
    double S_Centre_X;
    double S_Centre_Y;
    double S_Angle;
    double S_Side;
    double S_Coordinates_Of_Vertices[8]{};
    double S_Diagonal;
public:
    Square(double, double, double, double);
    void G_Move(double, double) override;
    void G_Rotate(double) override;
    void G_Scale(double) override;
    void G_Show() override;
};



#endif //INC_24_GRAPHIC_GRAPHIC_H
