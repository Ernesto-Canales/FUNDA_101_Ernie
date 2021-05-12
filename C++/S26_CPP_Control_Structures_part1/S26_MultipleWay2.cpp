#include <iostream>

using namespace std;

int main() {
    int nota_final = 200;

    //multiple-way
    if (nota_final == 100) {
        cout << "Nota excelente";
    } else if (nota_final == 90) {
        cout << "Nota buena";
    } else if (nota_final == 80) {
        cout << "Nota regular";
    } else if (nota_final == 70) {
        cout << "Casi dejas la materia";
    } else if (nota_final <= 60) {
        cout << "Dejaste la materia";
    } else {
        cout << "Error!";
    }
}