//Calcular Coseno
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double CalculateCos(double, int);
int Factorial(int);

int main() {
    double x_radian_value = 0; //1.57079
    int total_terms = 0; //

    cout << fixed << showpoint << setprecision(3);

    cout << "Ingrese el valor de X en radianes: ";
    cin >> x_radian_value;
    cout << endl;

    cout << "Ingrese la cantidad de terminos a sumar: ";
    cin >> total_terms;
    cout << endl;

    cout << "El coseno de " << x_radian_value << ", con " << total_terms << " terminos es: " << CalculateCos(x_radian_value, total_terms) << endl;
    cout << "Cos(x) = " << cos(x_radian_value);

    return 0;
}

double CalculateCos(double x, int n) {
    double cos_value = 0.0;

    for (int k = 0; k <= n; ++k) {
        cos_value += (((pow(-1, k)) * (pow(x, (2 * k)))) / (Factorial(2 * k))); //cos_value = (cos_value + ...)
    }

    return cos_value;
}

int Factorial(int k) {
    int factorial = 1;

    for(int i = 1; i <= k; ++i) {
            factorial *= i;
    }

    return factorial;
}