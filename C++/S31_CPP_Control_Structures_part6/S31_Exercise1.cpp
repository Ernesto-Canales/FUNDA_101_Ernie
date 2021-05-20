/*
*1.	Repeatedly print the value of the variable xValue, decreasing it by 0.5 each time, 
*   as long as xValue remains positive.
*/
#include <iostream>

using namespace std;

int main() {
    double xValue = 0.0;

    cout << "Ingrese un numero positivo: ";
    cin >> xValue;
    cout << endl;

    if (xValue >= 0) {
        while (xValue >= 0.0) {
            cout << xValue << endl;
            xValue -= 0.5; // xValue = (0.5 - xValue)
        }
    } else {
        cout << "El numero debe ser positivo";
    }

    cout << endl << "Fin";

    return 0;
}