#include "calc.h"
#include <iostream>

int main() {
  int a = 35;
  int b = 34;
  int c = add(a, b);
  int d = sub(a, b);
  std::cout << "sum is: " << c << std::endl;
  std::cout << "diff is: " << d << std::endl;

  return 0;
}
