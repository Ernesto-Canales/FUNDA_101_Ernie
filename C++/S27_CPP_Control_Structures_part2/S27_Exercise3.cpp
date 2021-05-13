/*
*3.	A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
*   a.	Ask user for quantity
*   b.	Suppose, one unit will cost 100.
*   c.	Judge and print total cost for user.
*/
#include <iostream>

using namespace std;

int main() {
    const double kUnitCost = 100.0;
    int total_quantity = 0;
    double total_cost = 0.0;

    cout << "Ingrese cantidad total de productos comprados: ";
    cin >> total_quantity;
    cout << endl;

    total_cost = (total_quantity * kUnitCost);

    if (total_cost >= 1000) {
        total_cost = (total_cost - (total_cost * 0.10));
        
        cout << "Se aplico un descuento del 10%" << endl;
        cout << "Total de articulos: " << total_quantity << endl;
        cout << "Total a pagar: $" << total_cost;
    } else {
        cout << "Total de articulos: " << total_quantity << endl;
        cout << "Total a pagar: $" << total_cost;
    }

    return 0;
}