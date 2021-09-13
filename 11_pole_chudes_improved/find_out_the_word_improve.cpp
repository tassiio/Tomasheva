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
        string input_word;
        cin >> input_word;

        char letter;

        if (input_word.length() > 1)
        {
            if (input_word == word)
                break;
            else
            {
                cout << "Your word is wrong. \n";
                return 0;
            }
        }
        else {
            letter = input_word[0];
        }

        bool flag = false;

        for (int i = 0; i < word.size(); i++)
        {
            if (copied_word[i] == letter)
            {
                cout << "This letter had already been used. \n";
                flag = true;
                break;
            }
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
         << word << "\n";

    return 0;
}