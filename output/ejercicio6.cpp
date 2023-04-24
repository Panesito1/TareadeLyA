#include <iostream>
#include <string>

using namespace std;


struct Atleta {
    string nombre;
    string apellido;
    int edad;
    string deporte;
};


struct Olimpiada {
    int año;
    Atleta atletas[5];
};

int main() {
   
    Olimpiada olimpiada;


    cout << "Ingrese el anio de la olimpiada: ";
    cin >> olimpiada.año;

   
    for (int i = 0; i < 5; i++) {
        cout << endl;
        cout << "Ingrese los datos del atleta #" << i+1 << endl;
        cout << "Nombre: ";
        cin >> olimpiada.atletas[i].nombre;
        cout << "Apellido: ";
        cin >> olimpiada.atletas[i].apellido;
        cout << "Edad: ";
        cin >> olimpiada.atletas[i].edad;
        cout << "Deporte: ";
        cin >> olimpiada.atletas[i].deporte;
    }

    
    cout << endl;
    cout << "Informacion de los atletas olímpicos de Nicaragua en " << olimpiada.año << ":" << endl;

    for (int i = 0; i < 5; i++) {
        cout << endl;
        cout << "Atleta #" << i+1 << endl;
        cout << "Nombre completo: " << olimpiada.atletas[i].nombre << " " << olimpiada.atletas[i].apellido << endl;
        cout << "Edad: " << olimpiada.atletas[i].edad << " años" << endl;
        cout << "Deporte: " << olimpiada.atletas[i].deporte << endl;
    }

    return 0;
}
