/*
*3.	Repeats a block of code as long as the user indicates they want it to.
*/
#include <iostream>

using namespace std;

int main() {
    char answer = 'Y';
    bool continuar = true;

    while (continuar) {
        cout << "Quiere volver a repetir el bucle (Y/N): ";
        cin.get(answer);
        cin.ignore(100, '\n');
        cout << endl;

        switch (toupper(answer)) {
            case 'Y':
                cout << "Volviendo a repetir blucle" << endl;
                break;
            case 'N':
                cout << "Parando bucle";
                continuar = false;
                break;
            default:
                cout << "Esa letra no es aceptada" << endl;
        }
    }

}