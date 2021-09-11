#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char yourstring[50], copiedstr[50];
    int i;
    cout << "Enter any string: \n";

    gets(yourstring);

    for(i = 0; i <= strlen(yourstring)-1; i++)
        copiedstr[i] = yourstring[i];

    cout << "I have copied your string: \n" << copiedstr << "\n";

    return 0;
}