/*
2. Write a value-returning function, isVowel, 
that returns the value true if a given character is a vowel and otherwise returns false.

3. Write a program that prompts the user to input a sequence of characters and outputs the number 
of vowels. (Use the function isVowel written in Exercise 2.)
*/

#include <iostream>
#include <string>

using namespace std;

//Prototipos
bool isVowel(char);

int main() {
    string phrase = "Hola como estas?"; //Dato quemado
    int length = phrase.size();
    int counter = 0;

    for (int i = 0; i <= (length - 1); ++i) {
        if (isVowel(phrase[i])) {
            ++counter;
        }
    }

    cout << "Hay " << counter << " vocales en la frase";

    return 0;
}

bool isVowel(char letter) {
    switch(tolower(letter)) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
            break;
        default:
            return false;
    }
}