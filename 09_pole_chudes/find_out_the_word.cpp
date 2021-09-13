#include <iostream>
// #include<cstdio>
#include <string>

using namespace std;

int main()
{

    string word;
    string copied_word;

    cout << "Input any word: \n";

    cin >> word;

    copied_word.append(word.size(), '-');

    while (copied_word != word)
    {
        cout << copied_word << "\n";

        cout << "Put any letter: "
             << "\n";
        char letter;
        cin >> letter;

        bool flag = false;

        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] == letter)
            {
                copied_word[i] = letter;
                flag = true;
            }
        }

        if (flag == false)
            cout << "There is no such letter. \n";
    }

    cout << "Your word is found out. \n"
         << copied_word << "\n";

    return 0;
}