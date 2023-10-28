/*
Create an array of integers and a pointer to the first element.
Use pointer arithmetic to access the second and third elements of the array
*/
#include <iostream>

using namespace std;

int main()
{
    int num[5] = { 1, 2, 3, 4, 5 };
    int* ptr;

    ptr = &num[0];

    for(int i = 0; i < 5; i++)
    {
        cout << num[i] << ' ';
    }

    cout << endl;

    int second, third;

    second = *(ptr+1);
    third = *(ptr+2);

    cout << "The second element: " << second << endl;
    cout << "The third element: " << third << endl;

    return 0;
}
