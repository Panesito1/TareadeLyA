#include <iostream>

int main() {
  int c[] = {'0', '1', '5', '7', '-', 'M', 'P', '2', '0', '2', '3'};
  
  std::cout << "Valores almacenados : ";
  for (int i = 0; i < 11; i++) {
    std::cout << c[i] << " ";
  }
  std::cout << std::endl;
  
  return 0;
}
