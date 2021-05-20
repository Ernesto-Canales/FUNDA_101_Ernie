#include <iostream>

using namespace std;

int main() {
    int table = 0;

    cout << "Ingrese la tabla de multiplicar que desea saber: ";
    cin >> table;
    cout << endl;

     cout << "Imprimiendo tabla del " << table << endl;

    for(int i = 0; i <= 10; ++i) {
        cout << "\t" << table << " X " << i << " = " << (table * i) << endl;
    }

    return 0;
}