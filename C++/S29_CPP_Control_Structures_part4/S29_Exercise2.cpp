/*
*2.	Suppose that classStanding is a char variable, and gpa and dues are double variables.
*   Write a switch expression that assigns the dues as following:
*   (Note that the code 'f' stands for first year students, the code 's' stands for second year students, the code 'j' stands for juniors, and the code 'n' stands for seniors.)
*       a.	If classStanding is 'f', the dues are $150.00;
*       b.	if classStanding is 's' (if gpa is at least 3.75, the dues are $75.00; otherwise, dues are 120.00);
*       c.	if classStanding is 'j' (if gpa is at least 3.75, the dues are $50.00; otherwise, dues are $100.00);
*       d.	if classStanding is 'n' (if gpa is at least 3.75, the dues are $25.00; otherwise, dues are $75.00).
*/
#include <iostream>

using namespace std;

int main() {
    char classStanding;
    double gpa, dues;

    cout << "El anio cursado solo acepta f, s, j y n" << endl;
    cout << "Ingrese el anio que esta cursando: ";
    cin.get(classStanding);
    cout << endl;

    cout << "Ingrese su gpa: ";
    cin >> gpa;
    cout << endl;

    if (gpa >= 0) {
        switch(classStanding) {
            case 'f': //Primer año
                dues = 150.0;
                cout << "Su cuota para este anio es: $" << dues;
                break;
            case 's': //Segundo año
                if (gpa >= 3.75) {
                    dues = 75.0;
                    cout << "Su cuota para este anio es: $" << dues;
                } else {
                    dues = 120.0;
                    cout << "Su cuota para este anio es: $" << dues;
                }
                break;
            case 'j': //Tercer año
                if (gpa >= 3.75) {
                    dues = 50.0;
                    cout << "Su cuota para este anio es: $" << dues;
                } else {
                    dues = 100.0;
                    cout << "Su cuota para este anio es: $" << dues;
                }
                break;
            case 'n': //Curto año
                if (gpa >= 3.75) {
                    dues = 25.0;
                    cout << "Su cuota para este anio es: $" << dues;
                } else {
                    dues = 75.0;
                    cout << "Su cuota para este anio es: $" << dues;
                }
                break;
            default:
                cout << "La letra ingreseda no existe en ninguno de los anios registrados";
        }
    } else {
        cout << "El gpa no puede ser negativo";
    }

    return 0;
}