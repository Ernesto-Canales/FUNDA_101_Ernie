#include <iostream>

using namespace std;

int main() {
    //calcular media de 5 notas con array
    int notas[5]; 
    int nota = 0;
    double promedio = 0;

    for (int i = 0; i <= 4; ++i) {
        cout << "Ingrese nota " << i << " : ";
        cin >> notas[i];
        cout << endl;

        nota += notas[i];
    }

    promedio = (nota / 5);

    cout << promedio << endl;

    for (int i = 0; i <= 4; ++i) {
        notas[i] = i;
    }

    for (int i = 0; i <= 4; ++i) {
        cout << "Nota " << i << " : " << notas[i] << endl;
    }

    return 0;
}