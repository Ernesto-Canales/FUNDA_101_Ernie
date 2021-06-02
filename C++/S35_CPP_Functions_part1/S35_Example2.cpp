//Calculadora simple sin prototipos
#include <iostream>

using namespace std;

int CalculadoraSuma(int a, int b) {
    return (a + b);
}

int CalculadoraResta(int a, int b) {
    return (a - b);
}

int CalculadoraMulti(int a, int b) {
    return (a * b);
}

int CalculadoraDivi(int a, int b) {
    return (a / b);
}

void MostrandoDatos(int choice, int x, int y) {
    switch(choice) {
        case 1:
            cout << "Respuesta: " << CalculadoraSuma(x, y);
            cout << "Respuesta: " << CalculadoraSuma(x, y);
            cout << "Respuesta: " << CalculadoraSuma(x, y);
            break;
        case 2:
            cout << "Respuesta: " << CalculadoraResta(x, y);
            break;
        case 3:
            cout << "Respuesta: " << CalculadoraMulti(x, y);
            break;
        case 4:
            cout << "Respuesta: " << CalculadoraDivi(x, y);
            break;
        default:
            cout << "ERROR";
    }
}

int main() {
    int x = 0;
    int y = 0;
    int answer = 0;
    int choice = 0;

    cout << "Opcion: 1-Suma, 2-Resta, 3-Multi, 4-Divi: ";
    cin >> choice;
    cout << endl;

    cout << "X: ";
    cin >> x;
    cout << endl;

    cout << "Y: ";
    cin >> y;
    cout << endl;

    MostrandoDatos(choice, x, y);

    return 0;
}