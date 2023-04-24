#include <iostream>
#include <string>

using namespace std;

struct Dispositivo {
    string modelo;
    string tipo;
    float precio;
};

int main() {
    
    Dispositivo dispositivo1 = {"iPhone 13", "Celular", 1000.00};
    Dispositivo dispositivo2 = {"iPad Pro", "Tablet", 899.99};
    Dispositivo dispositivo3 = {"LG OLED65", "Smart TV", 2599.99};
    Dispositivo dispositivo4 = {"Lenovo Legion 5", "Laptop", 849.99};

    cout << "Información de los dispositivos de Conico:" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Modelo: " << dispositivo1.modelo << endl;
    cout << "Tipo: " << dispositivo1.tipo << endl;
    cout << "Precio: $" << dispositivo1.precio << endl;
    cout << endl;
    cout << "Modelo: " << dispositivo2.modelo << endl;
    cout << "Tipo: " << dispositivo2.tipo << endl;
    cout << "Precio: $" << dispositivo2.precio << endl;
    cout << endl;
    cout << "Modelo: " << dispositivo3.modelo << endl;
    cout << "Tipo: " << dispositivo3.tipo << endl;
    cout << "Precio: $" << dispositivo3.precio << endl;
    cout << endl;
    cout << "Modelo: " << dispositivo4.modelo << endl;
    cout << "Tipo: " << dispositivo4.tipo << endl;
    cout << "Precio: $" << dispositivo4.precio << endl;

    return 0;
}
