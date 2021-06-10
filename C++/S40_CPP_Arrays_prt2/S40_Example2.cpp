#include <iostream>

using namespace std;

int main() {
    //sting array vs char array
    char string_array[] = "Mortimer";
    char char_array[] = {'M', 'o', 'r', 't', 'i', 'm', 'e', 'r'};
    int string_size = sizeof(string_array);// 9
    int char_size = sizeof(char_array);// 8

    //cout << "String: " << sizeof(string_array) << endl;
    //cout << "Char: " << sizeof(char_array) << endl;

    for (int i = 0; string_array[i] != '\0'; ++i) {
        cout << string_array[i];
    }

    cout << endl;

    for (int i = 0; i < string_size; ++i) {
        cout << string_array[i];
    }

    cout << endl;

    for (int i = 0; i < char_size; ++i) {
        cout << char_array[i];
    }

    return 0;
}