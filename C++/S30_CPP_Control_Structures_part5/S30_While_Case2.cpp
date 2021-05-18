#include <iostream>

using namespace std;

int main() {
    //Case 2 - Sentinel-Controlled
    int n1 = 0;

    while (n1 != -1) {
        cout << "Ingrese -1 para terminar loop: ";
        cin >> n1;

        cin.clear();
        cin.ignore(100,'\n');
    }

    cout << "Loop ended";

    return 0;
}