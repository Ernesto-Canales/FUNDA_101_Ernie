#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salario = 0.0;
    double tasa = 0.0;
    double horas = 0.0;

    cout << fixed << showpoint << setprecision(2);

    cout << "Ingrese cantidad de horas trabajadas: ";
    cin >> horas;
    cout << endl;

    cout << "Ingrese la tasa de pago: $";
    cin >> tasa;
    cout << endl;

    if (horas > 40.0)
        salario = ((40.0 * tasa) + ((1.5 * tasa) * (horas - 40.0)));
    else
        salario = (horas * tasa);

    cout << "El salario es: $" << salario;

    return 0;
}