//Operadores logicos
#include <iostream>

using namespace std;

int main() {
    int x, y; //int, double, float, char
    bool resultado;
    
    x = 2;
    y = 3;

    // && == Y
    // || == O
    // ! == ~ == Negacion

    cout << "x = " << x << ", y = " << y << endl;

    //&&
    resultado = ((x == y) && (x != y)); // ((2 == 3) Y (2 != 3))
                // F      Y     V
                //      F
    cout << "((x == y) && (x != y)) es: " << resultado << endl; //esperando 0

    //||
    resultado = ((x == y) || (x != y)); // ((2 == 3) O (2 != 3))
                // F      O     V
                //      V
    cout << "((x == y) || (x != y)) es: " << resultado << endl; //esperando 1

    //!
    resultado = !(x == y); // ~(2 == 3)
                // !F
                // V
    cout << "!(x == y) es: " << resultado << endl; //esperando 1
}