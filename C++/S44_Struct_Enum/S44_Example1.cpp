#include <iostream>

using namespace std;

struct Persona {
    
    string name = "Pablo";
    int age;
    double height;
};

void Mostrar(Persona);

int main() {
    Persona Ernesto;
    
    Persona *Carlos = &Ernesto;

    (*Carlos).age = 22;
    Carlos->age = 22;

    
    Ernesto.age = 21;
    Ernesto.height = 175.5;

    cout << Ernesto.name << endl;
    Mostrar(Ernesto);
    
    return 0;
}

void Mostrar(Persona Humano) {
    cout << Humano.name;
}