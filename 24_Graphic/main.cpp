#include "Graphic.h"
using namespace std;

int main() {

    Circle C1(-5,6,5); //(x0,y0,radius)
    Square S1(0,0,0,2); // (x0, y0, angle, side); initial position - rhombus with vertices on coordinate axes

    Graphic* Objects[2];
    Objects[0] = &C1;
    Objects[1] = &S1;

    cout << "Initial circle: " << endl;
    C1.G_Show();
    C1.G_Move(4, 60); //(length of vector, angle)
    cout << "Moving: " << endl;
    C1.G_Show();
    cout << "Rotation: " << endl;
    C1.G_Rotate(45); // (angle)
    C1.G_Show();
    cout << "Rescaling: " << endl;
    C1.G_Scale(2.0); // coefficient of rescaling
    C1.G_Show();
    cout << endl;

    cout << "Initial square: " << endl;
    S1.G_Show();
    cout << endl;
//    cout << "Moving: " << endl;
//    S1.G_Move(1, 45); //(length of vector, angle)
//    S1.G_Show();
//    cout << endl;
    cout << "Rotation: " << endl;
    S1.G_Rotate(45); // (angle)
    S1.G_Show();
    cout << endl;
    cout << "Rescaling: " << endl;
    S1.G_Scale(2.0); // coefficient of rescaling
    S1.G_Show();
    return 0;
}
