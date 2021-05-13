#include <iostream>

using namespace std;

int main() {
    int num = 0;

    cout << "Ingrese un numero entero: ";
    cin >> num;
    cout << endl;

    //Rango de 0 a inclusivo
    //probar con 5, 20 y -10

    if (0 <= num <= 10) { // 0 <= -10 --> false == 0 --> 0 <= 10 --> true == 1
        cout << "El numero se encuentra entre 0 y 10";
    } else {
        cout << "El numero no se encuentra entre 0 y 10";
    }

    cout << endl;

    if ((0 <= num) && (num <= 10)) {
        cout << "El numero se encuentra entre 0 y 10";
    } else {
        cout << "El numero no se encuentra entre 0 y 10";
    }

    return 0;
}