#include <iostream>
//#include <string>

int main() {
    int n1 = 0;

    do {
        std::cout << "Ingrese -1 para terminar loop: ";
        std::cin >> n1;

        std::cin.clear();
        std::cin.ignore(100,'\n');
        
    } while (n1 != -1);

    std::cout << "Loop end";

    return 0;
}