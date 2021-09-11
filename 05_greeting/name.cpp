#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char yourname[45];
    cout << "Enter your name: \n";
    gets(yourname);
    cout << "Nice to meet you, " << yourname << "!\n";

    return 0;
}