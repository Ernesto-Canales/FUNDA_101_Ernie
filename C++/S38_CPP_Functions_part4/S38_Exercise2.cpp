//Calcular Coseno
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double CalculateCos(double, int);
double Radians(double);
int Factorial(int);

int main() {
    double x_radian_value = 0; //0.785398
    int total_terms = 0; //

    cout << fixed << showpoint << setprecision(3);

    cout << "Ingrese el valor de X en grados: ";
    cin >> x_radian_value;
    cout << endl;

    cout << "Ingrese la cantidad de terminos a sumar: ";
    cin >> total_terms;
    cout << endl;

    x_radian_value = (Radians(x_radian_value));

    cout << "El coseno de " << x_radian_value << ", con " << total_terms << " terminos es: " << CalculateCos(x_radian_value, total_terms) << endl;
    cout << "Cos(x) = " << cos(x_radian_value);

    return 0;
}

double CalculateCos(double x, int n) {
    double t = 1;
    double cos_value = 1;

    for (int k = 1; k <= n; ++k) {
        t = (t * (-1) * x * x / (2 * k * (2 * k - 1)));
        cos_value += t;
    }

    return cos_value;
}

double Radians(double angle) {
    return ((angle * 3.14159265358979323846) / 180);
}

int Factorial(int k) {
    int factorial = 1;

    for(int i = 1; i <= k; ++i) {
            factorial *= i;
    }

    return factorial;
}