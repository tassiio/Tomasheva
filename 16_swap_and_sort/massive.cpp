#include <iostream>
#include <time.h>

using namespace std;

int input()
{
    while(true)
    {
        int length;

        cout << "Enter the length of your array: " << endl;
        cin >> length;

        if(cin.fail() || length < 0 || length > 100)
        {
            cin.clear();
            cin.ignore(32767, '\n');

            cout << "Invalid input. Please, re-enter.\n";
        }
        
        else
        {
            length = static_cast<int>(length); // type conversion into int if the input is not integer
            return length;
        }
    }
}

void printing(int arr[], int amount) 
{
    for (int i = 0; i < amount; i++)
    {
        cout << arr[i] << " ";
    }    

    cout << endl;

}

void swap_tmp(int *one, int *two)
{
    int three;
    three = *one;
    *one = *two;
    *two = three;
}

void Hoar_sort(int array[], int first_number, int last_number, int amount)
{
    int left, right, base;
    left = first_number;
    right = last_number;
    base = array[(left+right)/2];

    while(left <= right)
    {
        while (array[left] < base)
        {
            left++;
        } 
           
        while (array[right] > base)
        {
            right--;
        }    

        if (left <= right)
        {
            swap_tmp(&array[left], &array[right]);
            left++;
            right--;
            // if ( left != right ) 
            // {
            //     cout << "Next step: ";
            //     printing(array, amount);
            // }
        }

    }

    if (first_number < right)
    {
        Hoar_sort(array, first_number, right, amount);
    }
    
    if (left < last_number)
    {
        Hoar_sort(array, left, last_number, amount);  
    }
}
   
int main() 
{
    srand(time(NULL));
    int length_of_array = input();
    int *Array = new int[length_of_array];
    
    for (int i = 0; i < length_of_array; i++)
    {
        Array[i] = 1 + rand()%100;
    }

    cout << "The initial array: ";
    printing(Array, length_of_array);
    cout << endl;

    Hoar_sort(Array, 0, length_of_array - 1, length_of_array);

    cout << "There is the sorted array: ";
    printing(Array, length_of_array);

    delete[] Array;
    Array = nullptr;

return 0;
}
