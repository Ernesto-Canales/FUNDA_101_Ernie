/*
1.	Write a program that allows the user to enter the last names of five candidates in a local election 
    and the number of votes received by each candidate.
    The program should then output each candidate’s name, 
    the number of votes received,
    and the percentage of the total votes received by the candidate.
    Your program should also output the winner of the election. 
*/
#include <iostream>
#include <string>

using namespace std;

//Prototypes
void PedirDatos(string[], int[], int, double*);
void MostrarDatos(string[], int[], int, double);
double CalcularPorcentaje(int, double);
void MostrarGanador(string[], int[], int);

int main() {
    int elements = 5;
    string last_name[elements];
    int votes_count[elements];
    double count_total_votes = 0;

    //Pedir datos
    PedirDatos(last_name, votes_count, elements, &count_total_votes);

    //Mostrar datos
    MostrarDatos(last_name, votes_count, elements, count_total_votes);

    //Ganador
    MostrarGanador(last_name, votes_count, elements);

    return 0;
}

void PedirDatos(string name[], int vote[], int size, double *total) {
    for(int i = 0; i < size; ++i) {
        cout << "Ingrese el apellido del candidato: ";
        getline(cin, name[i]);

        cout << "Ingrese la cantidad de votos de " << name[i] << ": ";
        cin >> vote[i];
        cout << endl;

        cin.clear();
        cin.ignore(100, '\n');

        *total += vote[i];
    }
}

void MostrarDatos(string name[], int vote[], int size, double total_count) {
    for(int i = 0; i < size; ++i) {
        cout << "Candidato: " << name[i] << " con " << vote[i] << " votos - " << CalcularPorcentaje(vote[i], total_count) << "%" << endl;
    }
}

double CalcularPorcentaje(int vote, double total) {
    double porcentaje = 0;

    porcentaje = ((vote / total) * 100);

    return porcentaje;    
}

void MostrarGanador(string name[], int vote[], int size) {
    string winner_last_name;
    int winner_total_votes;

    winner_last_name = name[0];
    winner_total_votes = vote[0];

    for(int i = 1; i < size; ++i) {
        if (winner_total_votes < vote[i]) {
            winner_last_name = name[i];
            winner_total_votes = vote[i];
        }
    }

    cout << endl;
    cout << "El ganador de la eleccion es: " << winner_last_name;
}