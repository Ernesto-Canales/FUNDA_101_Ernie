#include <iostream>

using namespace std;

enum colores{verde = 1, amarillo = 10, naranja, rojo};
enum comparacion{menorque,mayorque,igualque};

struct CompararNum {
    int n;
    comparacion compara;
};

int main() {
    colores color;
    color = rojo;
    cout << color << endl;

    int numero = 1;

    CompararNum Num;
    Num.n = 1;

    if (Num.n < numero) {
        Num.compara = menorque;
    } else if (Num.n > numero) {
        Num.compara = mayorque;
    } else {
        Num.compara = igualque;
    }

    switch (Num.compara) {
        case menorque:
            cout << "Menor";
            break;
        case mayorque:
            cout << "Mayor";
            break;
        case igualque:
            cout << "Igual";
            break;
    }

    return 0;
}