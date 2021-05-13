/*
*4.	A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
*   a. Ask user for their salary and year of service and print the net bonus amount.
*/
#include <iostream>

using namespace std;

int main() {
    int total_years_working = 0;
    double salary = 0.0;
    double bonus = 0.0;

    cout << "Ingrese el salario neto: $";
    cin >> salary;

    cout << "Ingrese la cantidad de anios trabajando: ";
    cin >> total_years_working;

    cout << endl;

    if (total_years_working >= 5) {
        bonus = (salary * 0.05);
        salary += bonus; //salary = (salary + bonus);

        cout << "Su bono es de: $" << bonus << endl;
        cout << "Su salario con bono es de: $" << salary;
    } else {
        cout << "Su salario neto es de: $" << salary;
    }
}