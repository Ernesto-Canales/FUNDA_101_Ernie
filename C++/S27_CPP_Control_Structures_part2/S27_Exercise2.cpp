/*
*2.	Take two int values from user and print greatest among them.
*/
#include <iostream>

using namespace std;

int main() {
    int num1 = 0;
    int num2 = 0;
    
    cout << "Ingrese el numero A: ";
    cin >> num1;
    cout << endl;

    cout << "Ingrese el numero B: ";
    cin >> num2;
    cout << endl;

    if (num1 > num2) {
        cout << "Numero A mayor que numero B";
    } else if (num1 < num2) {
        cout << "Numero A menor que numero B";
    } else if (num1 == num2) {
        cout << "Numero A igual que numero B";
    }

    return 0;
}