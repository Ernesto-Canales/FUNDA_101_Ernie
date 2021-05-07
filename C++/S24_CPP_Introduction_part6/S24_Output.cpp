//Output
#include <iostream>

using namespace std;

int main() {
    //Using endl
    cout << "Hello" << endl;
    cout << "World!" << endl << endl;

    //""
    cout << "\"Hola\"" << endl;
    //cout << '"Hola"' << endl; ERROR!
    //''
    cout << "\'Hola\'" << endl;
    //""
    cout << "\\Hola\\" << endl;

    /*
    \n enter
    \t tab
    \b delete
    \r return
    */
    cout << "\n\n\nHello\n";
    cout << "World!\n\n";

    cout << "\t1\n";
    cout << "\t2\n";
    cout << "\t3";

///////////////////////////////////////////
    cout << endl << "-----MENU-----" << endl;
    cout << "Combos:\n";
    cout << "\t1. soda\n";
    cout << "\t2. pan\n";
    cout << "\t3. agua\n";
    cout << "\t4. asado\n";
    cout << "\t5. pollo\n";
}