#include <iostream>
#include <string>

using namespace std;

int main() {
    string phrase = "Hello World!"; //Cuenta inicia en [0]

    cout << "El tamano del string es: " << phrase.length() << endl << endl;

    cout << "Primera letra: " << phrase[0] << endl; //Muestra H
    cout << "Ultima letra: " << phrase[11] << endl; //(length() - 1) == 11, esperando !
    cout << phrase << endl << endl; // Hello World!

    //Modificando un caracter del string
    phrase[0] = 'J';
    phrase[11] = '#';

    cout << "Primera letra: " << phrase[0] << endl; //Muestra J
    cout << "Ultima letra: " << phrase[11] << endl; //(length() - 1) == 11, esperando #
    cout << phrase << endl << endl; // Jello World#
}