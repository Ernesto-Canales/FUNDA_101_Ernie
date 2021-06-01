#include <iostream>

using namespace std;

int main() {
    //Uso de BREAK y CONTINUE
    int contador = 0;

    while (true) {
        contador++;

        if (contador == 5) {
            continue;
        }
        
        if (contador == 10) {
            break;
        }

        cout << contador << endl;//1, 2, 3, 4, 6, 7, 8, 9
    }

    cout << "FIN";

    return 0;
}