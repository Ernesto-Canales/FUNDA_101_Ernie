#include <iostream>
#include <string>
using namespace std;

struct Student {
    string student_name = "";
    int grades[5] = {0, 0, 0, 0, 0};
    double average = 0.0;
};

//Prototipos
void Save(Student[], int);
void Calculate(Student[], int);
void Show(Student[], int);

int main() {
    Student estudiante[3];

    Save(estudiante, 3);
    Calculate(estudiante, 3);
    Show(estudiante, 3);

    return 0;
}

void Save(Student estudiante[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Nombre del estudiante: ";
        getline(cin, estudiante[i].student_name);
        cout << endl;

        for (int j = 0; j < 5; ++j) {
            cout << "Nota " << j << " del estudiante: ";
            cin >> estudiante[i].grades[j];
            cout << endl;
        }

        cin.clear();
        cin.ignore(100, '\n');
    }
}

void Calculate(Student estudiante[], int n) {
    int suma = 0;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 5; ++j) {
            suma += (estudiante[i].grades[j]);
        }

        estudiante[i].average = (suma / 5);
    }
}

void Show(Student estudiante[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Estudiante: " << estudiante[i].student_name << endl;
        
        for (int j = 0; j < 5; ++j) {
            cout << "Nota " << j << ": " << estudiante[i].grades[j] << endl;
        }

        cout << "Promedio: " << estudiante[i].average << endl << endl;
    }
}