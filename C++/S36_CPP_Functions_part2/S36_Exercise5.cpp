/*
5. Write a program that takes as input five numbers and outputs the mean (average) and standard deviation of the numbers.
If the numbers are x1, x2, x3, x4, and x5, then the mean is x = (x1 + x2 + x3 + x4 + x5)/5 and the standard deviation is: (See PDF)
    a) Your program must contain at least the following functions:
    a function that calculates and returns the mean
    and a function that calculates the standard deviation.
*/
#include <iostream>
#include <cmath>

using namespace std;

//Prototipos
double AverageFunction(int, int, int, int, int);
double DeviationFunction(int, int, int, int, int);

int main() {
    int x1 = 0;
    int x2 = 0;
    int x3 = 0;
    int x4 = 0;
    int x5 = 0;

    cout << "Valor de x1: ";
    cin >> x1;
    cout << endl;

    cout << "Valor de x2: ";
    cin >> x2;
    cout << endl;

    cout << "Valor de x3: ";
    cin >> x3;
    cout << endl;

    cout << "Valor de x4: ";
    cin >> x4;
    cout << endl;

    cout << "Valor de x5: ";
    cin >> x5;
    cout << endl;

    cout << "La media es: " << AverageFunction(x1, x2, x3, x4, x5) << endl;
    cout << "La desviacion estandar es: " << DeviationFunction(x1, x2, x3, x4, x5) << endl;

    return 0;
}

double AverageFunction(int x1, int x2, int x3, int x4, int x5) {
    double average_result;

    average_result = ((x1 + x2 + x3 + x4 + x5) / 5.0);

    return average_result;
}

double DeviationFunction(int x1, int x2, int x3, int x4, int x5) {
    double deviation_result;
    double average = AverageFunction(x1, x2, x3, x4, x5);

    deviation_result = (sqrt((pow((x1 - average), 2) + pow((x2 - average), 2) + pow((x3 - average), 2) + pow((x4 - average), 2) + pow((x5 - average), 2)) / 4));

    return deviation_result;
}