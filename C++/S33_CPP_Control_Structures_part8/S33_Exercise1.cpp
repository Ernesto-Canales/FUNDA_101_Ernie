/*

Print the following patterns using for loop:

*
**
***
****

*/

#include <iostream>

using namespace std;

int main() {
    
    for (int j = 1; j <= 4; ++j) { //null
        for (int i = 1; i <= j; ++i) { //null
            cout << "*";
        }
        cout << endl;
    }
    

    /*
    cout << "*";
    cout << endl;

    cout << "*";
    cout << "*";
    cout << endl;

    cout << "*";
    cout << "*";
    cout << "*";
    cout << endl;

    cout << "*";
    cout << "*";
    cout << "*";
    cout << "*";
    cout << endl;
    */

    return 0;

    /*
Inciar for1: j = 1
Evaluar condicion for1: 1 <= 4
	Ejecutar for2
		Inciar for2: i = 1
		Evaluar condicion for2: 1 <= 1
			Ejecutar: cout << "*";
		Actualizar: i = 2
		Evaluar condicion for2: 2 <= 1
	cout << endl;

Actualizar: j = 2

Evaluar condicion for1: 2 <= 4
	Ejecutar for2
		Inciar for2: i = 1
		Evaluar condicion for2: 1 <= 2
			cout << "*";
		Actualizar: i = 2
		Evaluar condicion for2: 2 <= 2
			cout << "*";
		Actualizar: i = 3
		Evaluar condicion for2: 3 <= 2
	cout << endl;
	
Actualizar: j = 3

Evaluar condicion for1: 3 <= 4
	Ejecutar for2
		Inciar for2: i = 1
		Evaluar condicion for2: 1 <= 3
			cout << "*";
		Actualizar: i = 2
		Evaluar condicion for2: 2 <= 3
			cout << "*";
		Actualizar: i = 3
		Evaluar condicion for2: 3 <= 3
			cout << "*";
		Actualizar: i = 4
		Evaluar condicion for2: 4 <= 3
	cout << endl;
	
Actualizar: j = 4

Evaluar condicion for1: 4 <= 4
	Ejecutar for2
		Inciar for2: i = 1
		Evaluar condicion for2: 1 <= 4
			cout << "*";
		Actualizar: i = 2
		Evaluar condicion for2: 2 <= 4
			cout << "*";
		Actualizar: i = 3
		Evaluar condicion for2: 3 <= 4
			cout << "*";
		Actualizar: i = 4
		Evaluar condicion for2: 4 <= 4
			cout << "*";
		Actualizar: i = 5
		Evaluar condicion for2: 5 <= 4
	cout << endl;

Actualizar: j = 5

Evaluar condicion for1: 5 <= 4

return 0;
*/
}