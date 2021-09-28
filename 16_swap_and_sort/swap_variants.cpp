#include <iostream>

using namespace std;

void swap_var_1(int *one, int *two)
{
    int three;
    three = *one;
    *one = *two;
    *two = three;
}

void swap_var_2(int *one, int *two)
{
    *one = *one + *two;
    *two = *one - *two;
    *one = *one - *two;
}

void swap_var_3(int *one, int *two)
{
    *one = (*one) * (*two);
    *two = static_cast<int>((*one)/(*two));
    *one = static_cast<int>((*one)/(*two));

}

void the_easiest_swap(int *one, int *two)
{
    swap(*one, *two);
}

int main()
{
    int a, b;
    cout << "Enter two integer numbers: ";
    cin >> a;
    cin >> b;

    //cout << endl;
    
    //swap_var_1(&a, &b);
    //swap_var_2(&a, &b);
    //swap_var_3(&a, &b);
    the_easiest_swap(&a, &b);

    cout << "After shift: " << a << " " << b << endl;

    return 0;
}