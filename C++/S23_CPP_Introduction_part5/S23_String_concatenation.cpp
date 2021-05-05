#include <iostream>
#include <string>

using namespace std;

int main() {
    string nombre = "Ernesto ";
    string apellido = "Canales";

    //Concatenando usando +
    string nombre_completo_plus = nombre + apellido;

    //Concatenando usando append()
    string nombre_completo_append = nombre.append(apellido);

    cout << nombre_completo_plus << endl;
    cout << nombre_completo_append << endl;

    /*
    string name = "Juan";
    int number = 1;

    name + number; ERROR!!!
    */
}