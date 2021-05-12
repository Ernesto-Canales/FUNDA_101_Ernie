#include <iostream>

using namespace std;

int main() {
    int edad = 22;

    if (edad >= 18)
        if (edad <= 21)
            cout << "Tu edad esta entre 18 y 21 anios";
    else
        cout << "Eres menor de edad";
}