#include <iostream>
#include <iomanip>

int main() {
  int c[12];
  c[0] = 9575;
  c[1] = 8791;
  c[2] = 8572;
  
  std::cout << "Valores almacenados en el arreglo: ";
  for (int i = 0; i < 3; i++) {
    std::cout << std::fixed << std::setprecision(2) << static_cast<double>(c[i])/100.0 << " ";
  }
  std::cout << std::endl;
  
  return 0;
}

