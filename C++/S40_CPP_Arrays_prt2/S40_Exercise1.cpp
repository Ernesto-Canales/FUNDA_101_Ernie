//Calcular el promedio de 3 notas de 5 alumnos diferentes
//Pista usar matrix
#include <iostream>
using namespace std;

//funcion main
int main() {
    double notas[5][3];
    double promedio = 0;

    //llenar matrix
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Ingrese la nota del estudiante " << i << ": ";
            cin >> notas[i][j];
        }
        cout << endl;
    }

    cout << endl << "PROMEDIO" << endl;
    //recorrer matrix
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 3; ++j) {
            promedio +=  notas[i][j];
        }
        cout << "El promedio del alumno " << i << " es: " << (promedio / 3) << endl;
        promedio = 0;
    }

    return 0;
}