#include <iostream>
#include <ctime> //funciones para el tiempo
#include <cstdlib> //funciones del random generator

using namespace std;

int main() {
    int random_number;
    int guess_number;

    //time(0) == return -> 201938

    srand(time(0)); //seed == codigo base o punto de partida para generar algo
    random_number = ((rand() % 10) + 1); // siempre inicia en 0 y termina en el numero indicado -1; al poner +1 ponemos el rango de 1 hasta mi numero

    cout << "Tiene 5 intentos para adivinar el numero random entre 1 y 10" << endl;

    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese el numero: ";
        cin >> guess_number;
        cout << endl;

        //continue
        //break

        if (guess_number == random_number) {
            cout << "Felicidades, adivinaste el numero random" << endl;
            break;
        } else if (guess_number > random_number) {
            cout << "El numero ingresado es mayor que el random" << endl;
        } else { //guess_number < random_number
            cout << "El numero ingresado es menor que el random" << endl;
        }
    }

    cout << "Gracias por participar";

    return 0;
}