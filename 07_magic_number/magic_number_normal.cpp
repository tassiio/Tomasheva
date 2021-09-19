#include<iostream>

using namespace std;

int main()
{
    int number, start_point, end_point;
    start_point = 0;
    end_point = 101;
    
    int check;

    while( true )
    {
        number = (start_point + end_point)/2;

        cout << "Is your number greater than " << number << "? 1 - yes, 2 - no, 3 - it's " << number << endl;
        cin >> check;
        
        if ( check == 1 )
        {
            start_point = number;
        }

        if ( check == 2 )
        {
            end_point = number;
        }

        if ( check == 3 )
        {
            cout << "Your number is " << number << endl;
            break;
        }

    }
}