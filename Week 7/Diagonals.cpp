#include <iostream>

int main() {
  int n = 0, sumF = 0, sumS = 0;
int arr[100][100];
std::cin >> n;
for(int i = 0; i < n; i++)
        for(int k = 0; k < n; k++)
        {
                std::cin >> arr[k][i];
        }

std::cout << "\n";
          for(int i = 0; i < n; i++)
          {
                  for( int k = 0; k < n; k++)
                  {
                          if(k == i) sumF += arr[i][k];
                          if(k + i == n - 1) sumS += arr[i][k];
                  }
          }
          std::cout << "First Diagonal - " << sumF << " \n";
          std::cout << "Second Diagonal - " << sumS << " \n";

  return 0;
}
