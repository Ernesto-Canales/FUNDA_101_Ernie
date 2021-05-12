#include <iostream>

using namespace std;

int main() {
    int edad = 0;

    cout << "Ingresa tu edad: ";
    cin >> edad;
    cout << endl;

    //Not compound block
    if (edad >= 18)
        cout << "Puedes votar!" << endl;
        //cout << "Ya eres mayor de edad";
    else
        cout << "No puedes votar!" << endl;
        //cout << "Eres menor de edad";

    cout << endl;

    //Compound block
    if (edad >= 18) {
        cout << "Puedes votar!" << endl;
        cout << "Ya eres mayor de edad" << endl;
    } else {
        cout << "No puedes votar!" << endl;
        cout << "Eres menor de edad" << endl;
    }
}