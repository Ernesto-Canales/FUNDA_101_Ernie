//Naming conventions
#include <iostream>

using namespace std;

int main() {
    //Camel Case:
    //La primera letra de cada palabra está en mayúscula sin espacios ni símbolos entre palabras.
    int Numero1delamulti;
    int Numero2;
    int Resultado;
    
    //Microdoft way
    int nombreDelusuario;
    string eBay;
    string iPhone;

    //Pascal Case:
    //Popularizado por el lenguaje de programación Pascal, este es un subconjunto de Camel Case donde la palabra comienza con mayúsculas.
    int Numero1DeLaMulti;
    int NombreDelUsuario;

    //Snake Case:
    //Las palabras dentro de frases o palabras compuestas se separan con un guión bajo.
    int numero_1_de_la_multi;
    int nombre_del_usuario;

    //Kebab Case: No se puede usare guió alto/normal en C++
    //Como Snake Case, pero usando guiones en su lugar.
    //int numero-1-de-la-multi;
    //int nombre-del-usuario;

    //Screaming Case:
    //Esto se refiere a nombres en mayúsculas.
    string NOMBREDELUSUSARIO;
    string NUMERO1;
    int NUMERO_MULTI;

    //Hungarian Notation:
    //Los nombres comienzan con un prefijo en minúsculas para indicar la intención. El resto del nombre está en Pascal Case. Viene en dos variantes: 
    //(a) Sistemas húngaros, donde el prefijo indica el tipo de datos; 
        string strNombreDelUsuario;
        int intNumeroMulti;
        const int constEntero = 4;
        int arrNumeros[5];
    //(b) Aplicaciones húngaro, donde el prefijo indica un propósito lógico.
    //rwPosition
    //tmpFile
}