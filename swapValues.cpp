/*
Write a function that takes two integer pointers as arguments and
swaps the values they point to.
*/
#include <iostream>

using namespace std;

void swapValues(int*, int*);

int main()
{
    int firstValue, secondValue;

    cout << "Enter two values: " << "\n";
    cin >> firstValue >> secondValue;

    cout << "First value: " << firstValue << endl;
    cout << "Second value: " << secondValue << endl;

    cout << "From the function" << endl;

    swapValues(&firstValue, &secondValue);

    cout << "===========================" << endl;

    cout << "First value: " << firstValue << endl;
    cout << "Second value: " << secondValue << endl;

    return 0;
}


void swapValues(int* ptr_1, int* ptr_2)
{
    cout << "First value: " << *ptr_1 << endl;
    cout << "Second value: " << *ptr_2 << endl;

    *ptr_1 = 100;
    *ptr_2 = 120;

}
