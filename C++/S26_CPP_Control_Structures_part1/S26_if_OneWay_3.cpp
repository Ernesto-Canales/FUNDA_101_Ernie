#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double kTasaInteres = 0.015;

    double balance_tarjeta_credito = 0.0;
    double pago = 0.0;
    double balance = 0.0;
    double cargo_extra = 0.0; //castigo

    cout << fixed << showpoint << setprecision(2);

    cout << "Ingrese el balance de su tarjeta de credito: $";
    cin >> balance_tarjeta_credito;
    cout << endl;

    cout << "Ingrese el pago: $";
    cin >> pago;
    cout << endl;

    balance = (balance_tarjeta_credito - pago);

    if (balance > 0)
        cargo_extra = (balance_tarjeta_credito * kTasaInteres);

    cout << "El nuevo balance es: $" << balance << endl;
    cout << "El cargo extra por usar la tarjeta es: $" << cargo_extra;

    return 0;
}