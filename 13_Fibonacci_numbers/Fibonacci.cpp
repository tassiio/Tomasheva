#include<iostream>

using namespace std;

int input()
{
    while(true)
    {
        int int_num;

        cout << "Enter an integer positive number less than 100:\n";
        cin >> int_num;

        if(cin.fail() || int_num < 0 || int_num > 100)
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

int Fibonacci_numbers(int num)
{
    if (num == 0)
        return 0;
    
    else if (num == 1)
        return 1;

    else 
        return Fibonacci_numbers(num-2) + Fibonacci_numbers(num-1);
}

int main()
{
    int number = input();
    // cout << "Number is " << number << endl;
    
    cout << "There are Fibonacci numbers: ";

    for(int i = 0; i < number; i++)
        {
            cout << Fibonacci_numbers(i) << " ";
        }

    cout << endl;
    return 0;
}