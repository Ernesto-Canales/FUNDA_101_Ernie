#include <iostream>

using namespace std;

int main() {
    //crear un menu base
    bool terminar = true;
    int option = 0;

    do {
        cout << endl << "Ingrese la opcion deseada";
        cout << endl << "1 para comprar";
        cout << endl << "2 para vender";
        cout << endl << "3 para salir";

        cout << endl << "Opcion deseada: ";
        cin >> option;

        cin.clear();
        cin.ignore(100, '\n');

        switch(option) {
            case 1:
                cout << endl << "Producto comprado" << endl;
                break;
            case 2:
                cout << endl << "Producto vendido" << endl;
                break;
            case 3:
                cout << endl << "Saliendo del sistema" << endl;
                terminar = false;
                break;
            default:
                cout << endl << "Opcion incorrecta" << endl;
        }
    } while (terminar);

    cout << endl << "FIN";

    return 0;
}