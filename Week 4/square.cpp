#include <iostream>

int main() {
std::cout << "Square \n";
int n = 0;
std::cin >> n;
for(int col = 0; col < n; col++) {
  for(int row = 0; row < n; row++) {
    if(col == 0 || col == n - 1 || row == n - 1 || row == 0) std::cout << " * ";
    else if(col < row || col == row) std::cout << "   ";
    else std::cout << " * ";
  }
std::cout << "\n";
}

  return 0;
}
