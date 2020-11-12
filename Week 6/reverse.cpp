#include <iostream>

int main() {
  int a[100];
  int n = 0;
  while(!(n > 0 && n <= 100))
  {
    std::cout << "Enter a number between 1 and 100 \n";
    std::cin >> n;
  }

  for(int i = 0; i < n; i++)
  {
    std::cin >> a[i];
  }
  for(int i = n - 1; i >= 0; i--)
  {
    std::cout << a[i] << " ";
  }

  return 0;
}
