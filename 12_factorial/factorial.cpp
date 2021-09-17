#include<iostream>

using namespace std;


int input()
{
    while(true)
    {
        int int_num;

        cout << "Enter an integer positive number less than 100000:\n";
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

long long int factorial(int num)
{
    long long int Factorial_n = 1;
    if (num != 0)
    {
        for (int i = 1; i < num + 1; i++)
        {
        Factorial_n = Factorial_n * i;
        }
        return Factorial_n;
    }

    else
        return Factorial_n;
}

int main()
{
    int number = input();
    // cout << "Number is " << number << endl;
    long long int factorial_of_a_number = factorial(number);
    
    cout << "Factorial of " << number << " is " << factorial_of_a_number << endl;
    return 0;
}