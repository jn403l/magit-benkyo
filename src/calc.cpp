#include "calc.h"
#include <iostream>

int add(int a, int b) {
  std::cout << "debug output" << std::endl;
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

<<<<<<< HEAD
int mul(int a, int b) {
	return a * b;
=======
int div(int a, int b) {
  return a / b; 
>>>>>>> e1c4337 (add support for division)
}
