//Operadores de asignacion
#include <iostream>

using namespace std;

int main() {
    int x; //int, double, float, char

    //igual
    x = 5;
    cout << "x = " << x << endl; //esperando 5

    //mas igual
    x += 5; //x = (x + 5);
    cout << "x con (+= 5) es: " << x << endl; //esperando 10

    //menos igual
    x -= 5; //x = (x - 5);
    cout << "x con (-= 5) es: " << x << endl; //esperando 5

    //por igual
    x *= 5; //x = (x * 5);
    cout << "x con (*= 5) es: " << x << endl; //esperando 25

    //entre igual
    x /= 5; //x = (x / 5);
    cout << "x con (/= 5) es: " << x << endl; //esperando 5

    //modulo igual
    x %= 5; //x = (x % 5);
    cout << "x con (%= 5) es: " << x << endl; //esperando 0
}