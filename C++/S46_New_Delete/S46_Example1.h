#pragma once
#ifndef HEADER1_E1
#define HEADER1_E1

#include <iostream>

namespace name_hola {
    void sumar(int a, int b) {
        std::cout << "Suma: " << a;
        //return (a + b);
    }

    int resta(int a, int b) {
        return (a - b);
    }

    /*int cout() {
       return -1; 
    }*/
}

#endif