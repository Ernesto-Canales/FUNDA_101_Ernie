#include <iostream>
#include "S46_Example1.h"

//using namespace std;
//using namespace name_hola;

int main() {
    int n1 = 5, n2 = 5;
    std::string hola;

    std::cout << name_hola::sumar(n1, n2);
    //std::cout << /*name_hola::cout <<*/ std::endl;
    std::cout << name_hola::resta(n1, n2);

    return 0;
}