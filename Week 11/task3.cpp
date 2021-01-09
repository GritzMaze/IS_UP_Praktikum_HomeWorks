#include <iostream>

bool containsDigitIn(int number, int digit) {

  if(number == 0) return false;

  if(number % 10 == digit) return true;

  return containsDigitIn(number / 10, digit);
}


int main() {

std::cout << std::boolalpha << containsDigitIn(1234, 5);

  return 0;
}
