//SUMAR a + b
#include <iostream>

using namespace std;

int suma(int a, int b) {
    int answer;

    answer = (a + b);

    return answer;
}

int main() { //probar con 5 y 5
    int a = 0;
    int b = 0;
    int answer = 0;

    cout << "Valor de a: ";
    cin >> a;
    cout << endl;

    cout << "Valor de b: ";
    cin >> b;
    cout << endl;

    //answer = (a + b);
    answer = suma(a, b);

    cout << "La respuesta es: " << answer << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}