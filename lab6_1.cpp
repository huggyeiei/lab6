#include <iostream>
using namespace std;

int main() { 
    int integer;
    int even = 0;
    int odd = 0;

    while (true) { 
        cout << "Enter an integer: ";
        cin >> integer;

        if (integer == 0) break; 

        if (integer % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd << endl;

    return 0;
}

