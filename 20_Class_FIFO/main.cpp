#include <iostream>
#include "FIFO.h"

using namespace std;

int input()
{
    while(true)
    {
        int int_num;

        cin >> int_num;

        if(cin.fail() || int_num < 0 || int_num > 100000)
        {
            cin.clear();
            cin.ignore(32767, '\n');

            cout << "Invalid input. Please, enter a number.\n";
        }

        else
        {
            int_num = static_cast<int>(int_num); // type conversion into int if the input is not integer
            return int_num;
        }
    }
}

int input_element()
{
    while(true)
    {
        int int_num;

        cin >> int_num;

        if(cin.fail())
        {
            cin.clear();
            cin.ignore(32767, '\n');

            cout << "Invalid input. Please, enter a number.\n";
        }

        else
        {
            int_num = static_cast<int>(int_num); // type conversion into int if the input is not integer
            return int_num;
        }
    }
}


int main() {
    cout << "Enter the length of the queue:\n";
    int Length_of_queue = input();
    int element;

    FIFO Queue(Length_of_queue);

    cout << "Enter integer elements of the queue:" << endl;
    for(int k = 0; k < Length_of_queue; k++) {

        element = input_element();

        Queue.F_Push(element);
    }

    cout << endl << "Queue elements (First in, First out):" << endl;

    for(int k = 0; k < Length_of_queue; k++) {
        Queue.F_Pop();
    }
    return 0;
}