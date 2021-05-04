//Operadores bit a bit
#include <iostream>

using namespace std;

int main() {
    int x, y; //int
    
    x = 2; //0010
    y = 3; //0011

    cout << "x = " << x << ", y = " << y << endl;

    //& == AND
    /*
      0010
    & 0011
    --------
    R// 0010 esto esperamos
    */
   cout << "(x & y) es: " << (x & y) << endl; //esperamos 2

   //| == OR
    /*
      0010
    | 0011
    --------
    R// 0011 esto esperamos
    */
   cout << "(x | y) es: " << (x | y) << endl; //esperamos 3

   //~ == Complement == -(ValorX + 1)
    /*
    ~  0010
    --------
      1101
    
    C1: 1010

    C2:
      1010
    + 0001
    --------
    R\ 1011 esto esperamos
    */
   cout << "(~x) es: " << (~x) << endl; //esperamos -3
}