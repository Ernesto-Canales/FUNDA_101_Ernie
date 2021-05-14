/*
* 5.	A school has following rules for grading system:
* Ask user to enter marks and print the corresponding grade.
*   a.	Below 25 - F
*   b.	25 to 45 - E
*   c.	45 to 50 - D
*   d.	50 to 60 - C
*   e.	60 to 80 - B
*   f.	Above 80 – A
*/
#include <iostream>

using namespace std;

int main() {
    char grade = 'Z';

    cout << "Ingrese la letra de su nota: ";
    cin.get(grade);
    cout << endl;

    switch (toupper(grade)) {
    case 'F':
        cout << "Debajo de 25 puntos";
        break;
    case 'E':
        cout << "Punta entre 25 y 45";
        break;
    case 'D':
        cout << "Puntaje entre 45 y 50";
        break;
    case 'C':
        cout << "Puntaje entre 50 y 60";
        break;
    case 'B':
        cout << "Puntaje entre 60 y 80";
        break;
    case 'A':
        cout << "Puntaje mayor a 80";
        break;
    default:
        cout << "Esa letra no esta contemplada en el rango de notas";
    }

    cout << endl;

    if (toupper(grade) == 'F') {
        cout << "Debajo de 25 puntos";
    } else if (toupper(grade) == 'E') {
        cout << "Punta entre 25 y 45";
    } else if (toupper(grade) == 'D') {
        cout << "Puntaje entre 45 y 50";
    } else if (toupper(grade) == 'C') {
        cout << "Puntaje entre 50 y 60";
    } else if (toupper(grade) == 'B') {
        cout << "Puntaje entre 60 y 80";
    } else if (toupper(grade) == 'A') {
        cout << "Puntaje mayor a 80";
    } else {
        cout << "Esa letra no esta contemplada en el rango de notas";
    }
}