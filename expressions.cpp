// working with expressions and math
// first expression 34 % -5,
// second expression 14 + 5 % 2 - 3,
// third expression 4 % 6,
#include <iostream>
#include <cmath>

using namespace std;

double getAdd(double a, double b) {
    double sum;
    sum = a + b;

    return sum;
}

double getPow(double x, double y) {
    double power;
    power = pow(x, y);

    return power;
}

int getSquareRoot(int number) {
    int squareRoot;
    squareRoot = sqrt(number);

    return squareRoot;
}

int getMax(int e, int f) {
    int maximum;
    maximum = max(e, f);

    return maximum;
}

int main()
{
    int num;

    // For getSquareRoot function

    cout << "Enter a number to get square root: ";
    cin >> num;

    cout << "Answer = " << getSquareRoot(num) << endl;

    double c, d;

    // For getPow function
    cout << "Enter two numbers to get power of number: ";
    cin >> c >> d;

    cout << "Answer = " << getPow(c, d) << endl;


    // For getAdd function and getMax function
    double number1, number2;

    cout << "Enter two numbers to be added up: ";
    cin >> number1 >> number2;

    cout << "Answer = " << getAdd(number1, number2) << endl;
    cout << "Maximum = " << getMax(number1, number2) << endl;

    // expressions
    cout << "First expression = " << 34 % - 5 << endl;
    cout << "Second expression = " << 14 + 5 % 2 - 3 << endl;
    cout << "Third expression = " << 4 % 6 << endl;

    return 0;
}