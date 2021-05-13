#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x = 1.0;
    double y = 3.0 / 7.0 + 2.0 / 7.0 + 2.0 / 7.0;

    cout << fixed << showpoint << setprecision(17);

    cout << "Mostrar x: " << x << endl;
    cout << "Mostrar y: " << y << endl;

    cout << endl;

    if (x == y) {
        cout << "X y Y son iguales" << endl;
    } else {
        cout << "X y Y no son iguales" << endl;
    }
    
    cout << endl;

    if (fabs(x - y) < 0.000001) {
        cout << "X y Y son iguales, con una tolerancia del 0.000001" << endl;
    } else {
        cout << "X y Y no son iguales, entre una tolerancia del 0.000001" << endl;
    }

    return 0;
}