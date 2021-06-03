/*
1. Write three different value-returning function, 
that return the value true if a given number is Even, otherwise return false for Odd.
(Tip: use IF, Ternary and Bitwise)
*/

#include <iostream>

using namespace std;

//Prototipos
bool IFunction(int);
bool TFunction(int);
bool BFunction(int);

int main() {
    int number = 0;
    bool answer;

    cout << "Ingrese a comprobar: ";
    cin >> number;
    cout << endl;

    answer = IFunction(number); //Para funcion 1

    if (answer) {
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }

    answer = TFunction(number); //Para funcion 2

    if (answer) {
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }


    answer = BFunction(number); //Para funcion 3

    if (answer) {
        cout << "El numero es par" << endl;
    } else {
        cout << "El numero es impar" << endl;
    }

    return 0;
}

bool IFunction(int number) {
    if ((number % 2) == 0) {
        return true;
    } else {
        return false;
    }
}

bool TFunction(int number) {
    bool answer;

    ((number % 2) == 0) ? (answer = true) : (answer = false);

    return answer;
}

bool BFunction(int number) {
    if ((number & 1) == 0) {
        return true;
    } else {
        return false;
    }
}