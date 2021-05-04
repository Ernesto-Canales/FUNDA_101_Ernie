//Pre-decrement and Post-decrement
//--
#include <iostream>

using namespace std;

int main() {
    //Pre-decrement
    int x;
    int y;

    //(x--) == (x = x - 1)
    x = 2; //1
    y = --x; //Primero resta -1 y luego asigna el valor a Y

    cout << "Pre-decrement" << endl;
    cout << "x = " << x << endl; //1
    cout << "y = " << y << endl; //1

    //Post-decrement
    x = 2; //1
    y = x--; //Primero asigna valor a Y, y luego resta -1

    cout << "Post-decrement" << endl;
    cout << "x = " << x << endl; //1
    cout << "y = " << y << endl; //2
}