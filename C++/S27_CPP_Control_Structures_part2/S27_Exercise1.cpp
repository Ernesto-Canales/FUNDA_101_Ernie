/*
*1.	Take values of length and breadth of a rectangle from user and check if it is square or not.
*/
#include <iostream>

using namespace std;

int main() {
    double length = 0.0;
    double breadth = 0.0;

    cout << "Ingrese el largo: ";
    cin >> length;
    cout << endl;

    cout << "Ingrese el ancho: ";
    cin >> breadth;
    cout << endl;

    if (length == breadth) {
        cout << "La figura es un cuadrado";
    } else {
        cout << "La figura es un rectangulo";
    }

    return 0;
}