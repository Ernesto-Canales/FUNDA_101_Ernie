/*
4. Write a function, reverseDigit, that takes an integer as a parameter and returns the number with its digits reversed.
    a. For example, the value of reverseDigit(12345) is 54321;
    the value of reverseDigit(5600) is 65;
    and the value of reverseDigit(-532) is -235.
*/

#include <iostream>

using namespace std;

//Prototipos
int reverseDigit(int);

int main() {
    int number = 789; //Dato quemado

    cout << "Entero original: " << number << ", entero al reves: " << reverseDigit(number);

    return 0;
}

int reverseDigit(int number) {
    int reversedNumber = 0;
    int remainder = 0;

    while (number != 0) {
        remainder = (number % 10);
        reversedNumber = (reversedNumber * 10 + remainder);
        number /= 10; //number = (number / 10);
    }
    
    return reversedNumber;
}