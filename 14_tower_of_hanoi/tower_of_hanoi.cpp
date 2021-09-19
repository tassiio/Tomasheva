#include <iostream>

using namespace std;

void hanoi(int layers, int start, int finish)
{
    if(layers == 1)
        cout << "From " << start << " to " << finish << endl;
    
    else
    {
        int tmp = 6 - start - finish;
        hanoi(layers-1, start, tmp);
        
        cout << "From " << start << " to " << finish << endl;
        hanoi(layers-1, tmp, finish);
    }
}

int main() 
{

    int layers;
    cout << "Enter the number of layers of tower of hanoi:" << endl;
    cin >> layers;

    hanoi(layers, 1, 3);

    return 0;
}