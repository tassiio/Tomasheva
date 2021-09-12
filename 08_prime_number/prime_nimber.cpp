#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n, i = 1;
    bool stopp = true;

    cout << "Enter any number greater than 1: \n";
    cin >> n;
    
    if ( n % 2 > 0 && n > 1 )
    {
        for ( i = 3 ; i < sqrt(n) + 1; i += 2 )
        {
            if ( n % i == 0 ) 
            {
                stopp = false;
                break;
            }
        }
        if ( stopp == true ) cout << "Your number is prime. \n";
        if ( stopp == false ) cout << "Your number is composite. \n";
    }

    else cout << "Your number is composite (if it isn't 1). \n" ;
    return 0;
} 