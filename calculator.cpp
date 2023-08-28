// creating a calculator by switch statement
#include <iostream>

using namespace std;

int main()
{
    float x, y;
    char oper;
    oper = '+', '-', '*', '/';

    cout << "Enter a number: ";
    cin >> x;

    cout << "Enter a operation between (+, -, /, *) to calculate: ";
    cin >> oper;

    cout << "Enter another number: ";
    cin >> y;

      switch (oper)
      {
      case '+':
        cout << x << " + " << y << " = " << x + y << endl;
        break;
      case '-': 
        cout << x << " - " << y << " = " << x - y << endl;
        break;
      case '*':
        cout << x << " * " << y << " = " << x * y << endl;
        break;
      case '/':
        if (y == 0) {
          cout << "Error Math" << endl;
        }
        else {
          cout << x << " / " << y << " = " << x / y << endl;
        }
        break;
      default:
        cout << "Invaild Operation" << endl;
        break;
      }



    return 0;
}