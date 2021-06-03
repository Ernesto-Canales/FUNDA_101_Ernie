/*
2. Write a value-returning function, isVowel, 
that returns the value true if a given character is a vowel and otherwise returns false.
*/

#include <iostream>

using namespace std;

//Prototipos
bool isVowel(char);

int main() {
    char letter = 'P'; //Dato quemado

    if (isVowel(letter)) {
        cout << "Vocal" << endl;
    } else {
        cout << "Consonante" << endl;
    }

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