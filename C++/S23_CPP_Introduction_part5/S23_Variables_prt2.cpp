//inicialización de variables
#include <iostream>

using namespace std;

int main() {
    int x; //Se asigna un valor basura
    int y; //Se asigna un valor basura

    x = 0; //Valor basura se vuelve 0
    y = 0; //Valor basura se vuelve 0

    int suma = (x + y);

    cout << "Valor de x: " << x << ", valor de y: " << y << endl;
    cout << "Suma: " << suma << endl;

/////////////////////////////////////////////////////////////////////////
    int promedio; //Valor basura
    int n1 = 2;
    int n2 = 2;
    int n3 = 2;

    promedio += n1;
    promedio += n2;
    promedio += n3;

    promedio = (promedio / 3);

    cout << "Promedio: " << promedio; //No obtenemos el resultado esperado
}