/*
*2.	Print the square roots of the first 25 odd positive integers.
*/
#include <iostream>
#include <cmath> //para poder usar la raiz cuadrada
#include <iomanip> //largo de decimales

using namespace std;

int main() {
    int odd_positive_integer = 1;
    int counter = 1;
    /*
    Antes de conocer un WHILE
        cout << sqrt(1);
        cout << sqrt(3);
        cout << sqrt(5);
        cout << sqrt(7);
    */

   cout << fixed << showpoint << setprecision(2);

    while (counter <= 25) { //Counter va a llegar hasta 24
        cout << counter << ". Raiz de " << odd_positive_integer << " = " << sqrt(odd_positive_integer) << endl;
        odd_positive_integer += 2; //odd_positive_integer = (odd_positive_integer + 2)
        ++counter;
    }

    return 0;
}