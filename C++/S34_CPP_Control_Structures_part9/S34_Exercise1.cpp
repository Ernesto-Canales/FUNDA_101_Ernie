/*
*Doña Canuta se ubica todos los sábados por la tarde en un puesto improvisado en el parque central de Antiguo Cuscatlán.
*Vende riguas, a 75 centavos cada una;
*pastelitos de verduras, a 50 centavos cada uno 
*y atol de elote, a 60 centavos cada vaso. 
*
*Elabore un programa al que se le pueda introducir desde teclado la cantidad de riguas,
*pastelitos y vasos de atol que le pide un cliente,
*y calcule lo que este cliente debe pagarle.
*/

#include <iostream>

using namespace std;

int main() {
    double kPrecioRiguas = 0.75;
    double kPrecioPasteles = 0.50;
    double kPrecioAtol = 0.60;

    bool continuar = true;

    int opcion = 0;

    int riguas_compradas = 0;
    int pasteles_comprados = 0;
    int atoles_comprados = 0;

    do {
        cout << endl << "===== MENU =====" << endl;
        //Cada entrada cuenta como 1 producto
        cout << "\tIngrese 1 para comprar Riguas" << endl;
        cout << "\tIngrese 2 para comprar Pasteles de carne" << endl;
        cout << "\tIngrese 3 para comprar Atol de elote" << endl;
        cout << "\tIngrese 4 para terminar compra" << endl;
        cout << "Opcion: ";
        
        cin >> opcion;

        cin.clear();
        cin.ignore(100, '\n');

        switch(opcion) {
            case 1:
                cout << endl << "Comprando una Rigua" << endl;
                riguas_compradas++;
                break;
            case 2:
                cout << endl << "Comprando un Pastel" << endl;
                pasteles_comprados++;
                break;
            case 3:
                cout << endl << "Comprando un Atol" << endl;
                atoles_comprados++;
                break;
            case 4:
                cout << endl << "Gracias por comprar" << endl;
                continuar = false;
                break;
            default:
                cout << endl << "Opcion incorrecta" << endl;
        }
    } while (continuar);

    cout << endl << "=== Factura ===" << endl;
    cout << "\t Riguas compradas: " << riguas_compradas << endl;
    cout << "\t Pasteles comprados: " << pasteles_comprados << endl;
    cout << "\t Atoles comprados: " << atoles_comprados << endl;
    cout << "Total a pagar: $" << ((riguas_compradas * kPrecioRiguas) + (pasteles_comprados * kPrecioPasteles) + (atoles_comprados * kPrecioAtol))  << endl;

    cout << endl << "FIN" << endl;

    return 0;
}