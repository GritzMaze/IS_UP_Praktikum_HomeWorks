#include <iostream>

int main() {
std::cout << "Square \n";
int n = 0;
std::cin >> n;
for(int col = 0; col < n - 1; col++) {
  std::cout << " * ";
  for(int row = 1; row < n - 2; row++) {
    std::cout << " ";
  }
std::cout << " *  \n";
}

  return 0;
}
