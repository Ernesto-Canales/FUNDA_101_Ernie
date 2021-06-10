#include <iostream>

using namespace std;

int main() {
    //calcular media de 5 notas con array
    int notas[5]; 
    int nota = 0;
    int array_size = (sizeof(notas) / sizeof(notas[0]));// 5
    double promedio = 0;

    for (int i = 0; i < array_size; ++i) {// 0, 1, 2, 3, 4
        cout << "Ingrese nota " << i << " : ";
        cin >> notas[i];

        nota += notas[i];
    }

    promedio = (nota / array_size);

    cout << endl << "El promedio es: " << promedio << endl << endl;

    for (int i = 0; i < array_size; ++i) {
        notas[i] = 0;
    }

    for (int i = 0; i < array_size; ++i) {
        cout << "Nota nueva: " << i << " : " << notas[i] << endl;
    }

    return 0;
}