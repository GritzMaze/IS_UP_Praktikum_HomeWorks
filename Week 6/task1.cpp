#include <iostream>

int main() {
  int a[100];
  int n = 0;
  double sum = 0;
  while(!(n > 0 && n <= 100))
  {
    std::cout << "Enter a number between 1 and 100 \n";
    std::cin >> n;
  }
  for(int i = 0; i < n; i++)
  {
    std::cin >> a[i];
      sum += a[i];
  }
  for(int i = 0; i < n; i++)
  {
    if(i == 0) {
        std::cout << "[" << a[i] << ",";
      } else if(i == n - 1) std::cout << a[i] << "]";
      else std::cout << a[i] << ",";
  }
  std::cout << "\n";
std::cout << sum / n;

/*
*
*   Array with real numbers
*
*
*/

double a[100];
int n = 0;
double sum = 0;
while(!(n > 0 && n <= 100))
{
        std::cout << "Enter a number between 1 and 100 \n";
        std::cin >> n;
}
for(int i = 0; i < n; i++)
{
        std::cin >> a[i];
        sum += a[i];
}
for(int i = 0; i < n; i++)
{
        if(i == 0) {
                std::cout << "[" << a[i] << ",";
        } else if(i == n - 1) std::cout << a[i] << "]";
        else std::cout << a[i] << ",";
}
std::cout << "\n";
std::cout << sum / n;



  return 0;
}
