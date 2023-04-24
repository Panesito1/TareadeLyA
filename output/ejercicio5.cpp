#include <iostream>
#include <string>

using namespace std;


struct Estudiante {
    string nombre;
    string apellido;
    int edad;
    float promedio;
    string telefono;
};

int main() {
    
    Estudiante estudiante;
    
    cout << "Ingrese los datos del estudiante:" << endl;
    cout << "Nombre: ";
    getline(cin, estudiante.nombre);
    cout << "Apellido: ";
    getline(cin, estudiante.apellido);
    cout << "Edad: ";
    cin >> estudiante.edad;
    cout << "Promedio: ";
    cin >> estudiante.promedio;
    cout << "Telefono: ";
    cin.ignore();
    getline(cin, estudiante.telefono);

    
    cout << endl;
    cout << "Informacion del estudiante:" << endl;
    cout << "Nombre completo: " << estudiante.nombre << " " << estudiante.apellido << endl;
    cout << "Edad: " << estudiante.edad << " anios" << endl;
    cout << "Promedio: " << estudiante.promedio << endl;
    cout << "Telefono: " << estudiante.telefono << endl;

    return 0;
}
