#include <iostream>

using namespace std;

int main() {
    int nota_final = 60;

    if (nota_final == 100)
        cout << "Nota excelente";
    
    if (nota_final == 90)
        cout << "Nota buena";

    if (nota_final == 80)
        cout << "Nota regular";
    
    if (nota_final == 70)
        cout << "Casi dejas la materia";
    
    if (nota_final <= 60)
        cout << "Dejaste la materia";
}