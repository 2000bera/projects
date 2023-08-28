#include <iostream> 
#include <string> 

using namespace std;

// checking Palindrome string
bool isCheck(string name) {

  int number1 = 0;
  int number2;
  number2 = name.size() - 1;

    while (number2 > number1) {
      if (name[number2] != name[number1]) {

          return false;
      }

      number1++;
      number2--;

    }

    return true;
}


// checking Palindrome interger
bool isPalindrome(int number) {

  string name = to_string(number);
  int x = 0;
  int y;
  y = name.size() - 1;

    while (y > x)
    {
      if (name[x] != name[y]) {

          return false;
      }

        x++;
        y--;
 
    }

    return true;

}

int main()
{ 
  int numb;

  cout << "Enter a number to be checked if it's Palindrome: ";
  cin >> numb;

    if (isPalindrome(numb)) {
        cout << numb << " is a Palindrome" << endl;
    }
    else {
        cout << numb << " is not a Palindrome" << endl;
    }

    string word;

    cout << "Enter a word to be checked if it's a Palindrome: ";
    cin >> word;

      if (isCheck(word)) {
          cout << word << " is a Palindrome" << endl;
      }
      else {
          cout << word << " is not a Palindrome" << endl;
      }

  return 0;

}