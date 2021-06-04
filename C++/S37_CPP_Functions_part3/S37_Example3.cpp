//Function overloading
#include <iostream>

using namespace std;

void Suma(int, int);
void Suma(double, double);

int main() {
    
    Suma(5, 5);
    Suma(5.0, 5.0);

    return 0;
}

void Suma(int x, int y) {
    cout << "F1, suma = " << (x + y) << endl;
}

void Suma(double x, double y) {
    cout << "F2, suma = " << (x + y) << endl;
}