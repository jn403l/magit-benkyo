#include "calc.h"
#include <iostream>

int add(int a, int b) {
  std::cout << "debug output" << std::endl;
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

int mul(int a, int b) {
	return a * b;
}
