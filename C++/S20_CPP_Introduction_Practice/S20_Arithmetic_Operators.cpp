//Operadores aritmeticos
#include <iostream>

using namespace std;

int main() {
    double x, y, z;

    x = 2;
    y = 3;

    cout << "x = " << x << ", y = " << y << endl;
    
    //suma
    z = (x + y);
    cout << "(x + y) = " << z << endl;

    //resta
    z = (x - y);
    cout << "(x - y) = " << z << endl;

    //multi
    z = (x * y);
    cout << "(x * y) = " << z << endl;

    //divi
    z = (x / y);
    cout << "(x / y) = " << z << endl;

    //modulo solo funciona con INT
    //z = (x % y);
    //cout << "(x % y) = " << z << endl;
}