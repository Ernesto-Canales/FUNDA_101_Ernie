#include <iostream>
using namespace std;

int main() {
    int number;
	char letter;
	
	cout << "Ingrese un entero: ";
	cin >> number;
	
	cin.ignore(100, '\n'); //Si quitamos el cin.ignore, en letter se almacenara un salto de linea (\n)
	
	cout << endl << "Ingrese una letra: ";
	cin.get(letter);
	
	cout << endl << "Valor del entero: " << number;
	cout << endl << "Valor de letra: " << letter;
}
