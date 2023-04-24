#include <iostream>

int main() {
  int c[21]; 

  std::cout << "Ingrese los caracteres de la tabla:\n";
  
  for (int i = 0; i < 21; i++) {
    std::cout << "Caracter " << i+1 << ": ";
    std::cin >> c[i];
  }
  
  std::cout << "Valores almacenados en el arreglo: ";
  for (int i = 0; i < 21; i++) {
    std::cout << c[i] << " ";
  }
  std::cout << std::endl;
  
  return 0;
}
