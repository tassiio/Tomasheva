#include <iostream>
#include "Inheritance.h"

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
    cout << "Enter the length of the stack:\n";
    int Length_of_stack = input();
    int element;

    LIFO Stack(Length_of_stack);

    cout << "Enter integer elements of the stack:" << endl;
    for(int k = 0; k < Length_of_stack; k++) {

        element = input_element();

        Stack.Initial_Push(element);
    }
    Stack.Pop();

    cout << endl << "Adding new element in the stack..." << endl;
    Stack.Push(6); //Put your new element here pls

    Stack.Pop();


    //Queue block

    cout << "Enter the length of the queue:" << endl;
    int Length_of_queue = input();
    int element_q;

    FIFO Queue(Length_of_queue);

    cout << "Enter integer elements of the queue:" << endl;
    for(int k = 0; k < Length_of_queue; k++) {

        element_q = input_element();

        Queue.Initial_Push(element_q);
    }

    Queue.Pop();
    Queue.Push(6);
    return 0;
}