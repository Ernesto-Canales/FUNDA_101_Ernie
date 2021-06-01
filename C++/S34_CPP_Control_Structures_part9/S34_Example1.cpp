#include <iostream>

using namespace std;

int main() {
    int num = 0;

    do {
        cout << "Ingrese -1 para terminar: ";
        cin >> num;

        cin.clear();
        cin.ignore(100, '\n');

    } while (num != -1);

    cout << endl << "FIN";

    return 0;
}