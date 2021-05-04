//Operadores de comparacion
#include <iostream>

using namespace std;

int main() {
    int x, y; //int, double, float, char
    bool resultado;
    
    x = 2;
    y = 3;

    cout << "x = " << x << ", y = " << y << endl;

    //igual a
    resultado = (x == y); // (2 == 3) Falso
    cout << "resultado con == es: " << resultado << endl; //esperando 0

    //diferente de
    resultado = (x != y); // (2 != 3) Verdadero
    cout << "resultado con != es: " << resultado << endl; //esperando 1

    //mayor que (no incluye al numero)
    resultado = (x > y); // (2 > 3) Falso
    cout << "resultado con > es: " << resultado << endl; //esperando 0

    //menor que (no incluye al numero)
    resultado = (x < y); // (2 < 3) Verdadero
    cout << "resultado con < es: " << resultado << endl; //esperando 1

    //mayor o igual que (incluye al numero)
    resultado = (x >= y); // (2 >= 3) Falso
    cout << "resultado con >= es: " << resultado << endl; //esperando 0

    //menor o igual que (incluye al numero)
    resultado = (x <= y); // (2 <= 3) Verdadero
    cout << "resultado con <= es: " << resultado << endl; //esperando 1
}