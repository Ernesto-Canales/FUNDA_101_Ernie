//Parametro por referencia
#include <iostream>

using namespace std;

int Suma(int&, int&);

int main() {
    int x = 5, y = 5, answer = 0;

    cout << "Antes de la referencia, x = " << x << ", y = " << y << endl;

    answer = Suma(x, y);

    cout << "Despues de la referencia, x = " << x << ", y = " << y << endl;
    cout << answer;

    return 0;
}

int Suma(int &x, int &y) {
    int respuesta = (x + y);

    if (respuesta >= 10) {
        x = 0;
        y = 0;
    }

    return respuesta;
}