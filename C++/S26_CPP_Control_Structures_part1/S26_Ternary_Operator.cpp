#include <iostream>

using namespace std;

int main() {
    int tiempo = 16;
    
    //IF normal
    if (tiempo > 17) {
        cout << "Buenas tardes" << endl;
    } else {
        cout << "Buenas" << endl;
    }

    //Ternario
    string resultado;

    resultado = (tiempo > 17) ? "Buenas tardes" : "Buenas";
    cout << resultado;
}