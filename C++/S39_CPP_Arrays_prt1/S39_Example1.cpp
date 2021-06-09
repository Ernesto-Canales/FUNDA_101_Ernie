#include <iostream>

using namespace std;

int main() {
    //calcular media de 5 notas sin array
    int nota = 0;
    int notas = 0;
    double promedio = 0;

    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese nota " << i << " :";
        cin >> notas;
        cout << endl;

        nota += notas;
    }

    promedio = (nota / 5);

    cout << "El promedio es: " << promedio;

    return 0;
}