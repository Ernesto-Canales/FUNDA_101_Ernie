#include <iostream>

using namespace std;

int main(){
    char vowel = 'c';

    switch(tolower(vowel)) { //Forma 3, corto
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout << "La variable vowel es una vocal";
        break;
    default:
        cout << "La variable vowel es una consonante";
    }

    cout << endl;

    if ((tolower(vowel) == 'a') || (tolower(vowel) == 'e') || (tolower(vowel) == 'i') || (tolower(vowel) == 'o') || (tolower(vowel) == 'u')) {
        cout << "La variable vowel es una vocal";
    } else {
        cout << "La variable vowel es una consonante";
    }
}