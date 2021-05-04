//Pre-increment and Post-increment
//++
#include <iostream>

using namespace std;

int main() {
    //Pre-increment
    int x;
    int y;

    //(x++) == (x = x + 1)
    x = 2; //3
    y = ++x; //Primero suma +1 y luego asigna el valor a Y

    cout << "Pre-increment" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    //Post-increment
    x = 2; //3
    y = x++; //Primero asigna valor a Y, y luego suma +1

    cout << "Post-increment" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}