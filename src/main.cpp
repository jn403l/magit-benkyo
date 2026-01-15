#include "calc.h"
#include <iostream>

int main() {
  int a = 34;
  int b = 35;
  int c = add(a, b);
  std::cout << "sum is: " << c << std::endl;

  return 0;
}
