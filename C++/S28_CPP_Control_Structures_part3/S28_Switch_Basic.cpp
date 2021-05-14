#include <iostream>

using namespace std;

int main() {
    int day = 26; //La semana incia en domingo == 0

    //Calcular dia de la semana
    switch(day) {
        case 0:
            cout << "Hoy es domingo" << endl;
            break;
        case 1:
            cout << "Hoy es lunes" << endl;
            break;
        case 2:
            cout << "Hoy es martes" << endl;
            break;
        case 3:
            cout << "Hoy es miercoles" << endl;
            break;
        case 4:
            cout << "Hoy es jueves" << endl;
            break;
        case 5:
            cout << "Hoy es viernes" << endl;
            break;
        case 6:
            cout << "Hoy es sabado" << endl;
            break;
        default:
            cout << "Error, ese dia no existe" << endl;
    }

    return 0;
}