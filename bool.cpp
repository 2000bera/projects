// x = True, y = False, z = False
// z || (x && (y || z)), !y || (z || !x)
#include <iostream>

using namespace std;

//z || (x && (y || z)) // false
namespace False {
    bool isFalse() {
        bool z = false;
        bool x = true;
        bool y = false;
        bool isCheck = z || (x && (y || z));

        if (isCheck == 0) {
            cout << "False" << endl;
        }
        else {
            cout << "True" << endl;
        }

        return false;
    }
}

// !y || (z || !x) // true
namespace True {
    bool isTrue() {
        bool y = false;
        bool z = false;
        bool x = true;
        bool isCheck = !y || (z || !x);

        if (isCheck == 1) {
            cout << "True" << endl;
        }
        else {
            cout << "False" << endl;
        }

        return true;
    }
}

int main()
{
    False::isFalse();
    True::isTrue();

    return 0;
}