#include <iostream>

using namespace std;

int main() {
    //Case 1 - Counter-Controlled
    int counter = 0;

    while (counter < 5) {
        counter++;
        cout << "Mi primer while contador: " << counter;
        cout << endl;
        //counter++;
    }
}