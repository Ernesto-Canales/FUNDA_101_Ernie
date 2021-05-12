#include <iostream>

using namespace std;

int main() {
    //two-way direction
    int num1;

    cout << "Ingrese un numero: ";
    cin >> num1;

    if (num1 >= 60)
        cout << endl << "num1 es mayor o igual a 60"; //statement
    else
        cout << endl << "num1 es menor a 60"; //statement

    cout << endl << "fin";
}