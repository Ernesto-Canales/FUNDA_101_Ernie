/*
The ouput of this will be as follows (assuming the input was abcd):
char1 = a, char1 = b, char1 = b, char1 = c, char1 = c.
*/
#include <iostream>
using namespace std;

int main() {
    char char1;

    cout << "Enter string: ";
    cin.get(char1);
    cout << endl;

    cout << "char1 = " << char1 << endl;

    cin.get(char1);
    cout << endl;
    cout << "char1 = " << char1 << endl;

    cin.putback(char1);
    cin.get(char1);
    cout << endl;
    cout << "char1 = " << char1 << endl;

    char1 = cin.peek();
    cout << "char1 = " << char1 << endl;

    cin.get(char1);
    cout << endl;
    cout << "char1 = " << char1 << endl;
}