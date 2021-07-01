#include <iostream>
#include "S45_Example2Header1.h"
#include "S45_Example2Header2.h" //sinonimo de #include "Example2Header1.h" por 2da vez

using namespace std;

int main() {
    int n1 = 5, n2 = 5;
    
    cout << SumarNumeros(n1, n2);
    cout << endl;
    cout << RestarNumeros(n1, n2);

    return 0;
}