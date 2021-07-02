/*
-Doña Canuta se ubica todos los sábados por la tarde en un puesto improvisado en
    el parque central de Antiguo Cuscatlán. 
        - Vende riguas, a 75 centavos cada una;
        - pastelitos de verduras, a 50 centavos cada uno y
        - atol de elote, a 60 centavos cada vaso. 
- Elabore un programa al que se le pueda introducir desde teclado la cantidad
    de riguas, pastelitos y vasos de atol que le pide un cliente, y calcule lo que este
    cliente debe pagarle.
*/
#include <iostream>
#include "S46_Example2.h"

int main() {
    int total_clientes;

    std::cout << "Cuantos clientes tiene en la cola: ";
    std::cin >> total_clientes;
    std::cout << std::endl;

    ShowMenu(total_clientes);

    return 0;
}