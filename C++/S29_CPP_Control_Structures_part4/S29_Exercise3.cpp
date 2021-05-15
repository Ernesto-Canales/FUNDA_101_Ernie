/*
*3.	One way to determine how healthy a person is by measuring the body fat of the person.
*   The formulas to determine the body fat for female and male are as follows:
*   (Write a program to calculate the body fat of a person.)
*       a.	Body fat formula for women:
*           i.	A1 = (body weight * 0.732) + 8.987
*           ii.	A2 = wrist measurement (at fullest point) / 3.140
*           iii.    A3 = waist measurement (at navel) * 0.157
*           iv.	A4 = hip measurement (at fullest point) * 0.249
*           v.	A5 = forearm measurement (at fullest point) * 0.434
*           vi.	B = A1 + A2 – A3 – A4 + A5
*           vii.	Body fat = body weight – B
*           viii.	Body fat percentage = body fat * 100 / body weight
*       b.	Body fat formula for men:
*           i.	A1 = (body weight * 1.082) + 94.42
*           ii.	A2 = wrist measurement * 4.15
*           iii.	B = A1 – A2
*           iv.	Body fat = body weight – B
*           v.	Body fat percentage = body fat * 100 / body weight
*/
#include <iostream>

using namespace std;

int main() {
    char gender_type; //Homre = M, Mujer = F
    double A1, A2, A3, A4, A5, B; //Para realizar calculos
    double body_weight = 0.0; //Peso
    double wrist_measurement = 0.0; //Medida de la muñeca
    double waist_measurement = 0.0; //Medida de la cintura
    double hip_measurement = 0.0; //Medida de la cadera
    double forearm_measurement = 0.0; //Medida del antebrazo
    double body_fat = 0.0; //Grasa corporal
    double body_fat_percentage = 0.0; //Porcentaje de grasa corporal

    cout << "Favor de ingresar M o F, para indicar Masculino o Femenino: ";
    cin >> gender_type;
    cout << endl;

    switch (toupper(gender_type)) {
        case 'M':
            //Trabajando en el SI
            cout << "Ingrese su peso en kg: ";
            cin >> body_weight;

            cout << "Ingrese el tamanio de su munieca en m: ";
            cin >> wrist_measurement;
            cout << endl;

            A1 = ((body_weight * 1.082) + 94.42);
            A2 = (wrist_measurement * 4.15);

            B = (A1 - A2);

            body_fat = (body_weight - B);
            body_fat_percentage = ((body_fat * 100) / body_weight);

            cout << "El porcentaje de su grasa corporal es: " << body_fat_percentage;
            break;
        case 'F':
            //Trabajando en el SI
            cout << "Ingrese su peso en kg: ";
            cin >> body_weight;

            cout << "Ingrese el tamanio de su munieca en m: ";
            cin >> wrist_measurement;

            cout << "Ingrese el tamanio de su cintura en m: ";
            cin >> waist_measurement;

            cout << "Ingrese el tamanio de su cadera en m: ";
            cin >> hip_measurement;

            cout << "Ingrese el tamanio de su antebrazo en m: ";
            cin >> forearm_measurement;
            cout << endl;

            A1 = ((body_weight * 0.732) + 8.987);
            A2 = (wrist_measurement / 3.140);
            A3 = (waist_measurement * 0.157);
            A4 = (hip_measurement * 0.249);
            A5 = (forearm_measurement * 0.434);
            
            B = (A1 + A2 - A3 - A4 + A5);

            body_fat = (body_weight - B);
            body_fat_percentage = ((body_fat * 100) / body_weight);

            cout << "El porcentaje de su grasa corporal es: " << body_fat_percentage;
            break;
        default:
            cout << "Favor de ingresar M o F, para indicar Masculino o Femenino";
    }

    return 0;
}