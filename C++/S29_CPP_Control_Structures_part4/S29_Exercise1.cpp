/*
*1.	If the number of items bought is less than 5, then the shipping charges are $5.00 for each item bought;
*   if the number of items bought is at least 5, but less than 10, then the shipping charges are $2.00 for each item bought;
*   if the number of items bought is at least 10, there are no shipping charges.
*/
#include <iostream>

using namespace std;

int main() {
    int items_bought = 0;
    double shipping_charges = 0.0;

    cout << "Ingrese la cantidad de objetos comprados: ";
    cin >> items_bought;
    cout << endl;

    if (items_bought >= 1) {
        if (items_bought < 5) {
            shipping_charges = (items_bought * 5.0);
            cout << "Los cargos extra por el envio de " << items_bought << " productos es: $" << shipping_charges;
        } else if ((items_bought >= 5) && (items_bought < 10)) {
            shipping_charges = (items_bought * 2.0);
            cout << "Los cargos extra por el envio de " << items_bought << " productos es: $" << shipping_charges;
        } else if (items_bought >= 10) {
            cout << "Los cargos extra por el envio de " << items_bought << " productos es: $" << shipping_charges;
        }
    } else {
        cout << "No se permiten numeros negativos o cero";
    }

    return 0;
}