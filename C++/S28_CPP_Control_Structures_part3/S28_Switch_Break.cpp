#include <iostream>

using namespace std;

int main(){
    char vowel = 'A';

    switch (vowel) { //Forma 1, largo
    case 'a':
        cout << "La variable vowel es una vocal";
        break;
    case 'e':
        cout << "La variable vowel es una vocal";
        break;
    case 'i':
        cout << "La variable vowel es una vocal";
        break;
    case 'o':
        cout << "La variable vowel es una vocal";
        break;
    case 'u':
        cout << "La variable vowel es una vocal";
        break;
    case 'A':
        cout << "La variable vowel es una vocal";
        break;
    case 'E':
        cout << "La variable vowel es una vocal";
        break;
    case 'I':
        cout << "La variable vowel es una vocal";
        break;
    case 'O':
        cout << "La variable vowel es una vocal";
        break;
    case 'U':
        cout << "La variable vowel es una vocal";
        break;
    default:
        cout << "La variable vowel es una consonante";
    }

    cout << endl;

    switch (vowel) { //Forma 2, semi-corto
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        cout << "La variable vowel es una vocal";
        break;
    default:
        cout << "La variable vowel es una consonante";
    }

    cout << endl;

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
}