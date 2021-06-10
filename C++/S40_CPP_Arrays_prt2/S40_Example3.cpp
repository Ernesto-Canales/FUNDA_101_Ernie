#include <iostream>

using namespace std;

int main() {
    int notas_alumnos[3][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {1, 1, 1, 1, 1}};
    int notas = 0;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << "Alumno " << i << ", nota " << j << ": ";
            cin >> notas_alumnos[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << "Alumno [" << i << "][" << j << "]: " << notas_alumnos[i][j] << " | ";
        }
        cout << endl;
    }

    return 0;
}