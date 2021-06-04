//Parametro por valor y predefinido
#include <iostream>

using namespace std;

void MyFunction(int, string name = "Juan", string last_name = "Perez");

int main() {
    MyFunction(12, "Pedro");
    MyFunction(20);
    MyFunction(50, "Hola", "Martinez");

    return 0;
}

void MyFunction(int age, string name, string last_name) {
    cout << "Nombre completo: " << name << " " << last_name << ", edad: " << age << endl;
}