/*
*5.	Create a random number guessing game.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int num; //random
    int guess; //intento del usuario

    //Creando random
    srand(time(0));
    num = rand() % 100;

    while (num != guess) {
        cout << "Ingrese un entero mayor o igual a cero, o menor o igual a 100: ";
        cin >> guess;
        cout << endl;

        if (num == guess) {
            cout << "Numero random encontrado" << endl;
        } else if (num > guess) {
            cout << "El numero ingresado es menor que el random" << endl;
        } else {
            cout << "El numero ingresado es mayor que el random" << endl;
        }
    }

    cout << "Felicidades!";

    return 0;
}