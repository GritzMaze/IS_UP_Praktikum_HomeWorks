#include <iostream>

int main() {
        int n = 0, sum = 0, sum2 = 0;
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
          sum = 0;
          sum2 = 0;
                for( int k = 0; k < n; k++)
                {
                        sum += arr[k][i];
                        sum2 += arr[i][k];
                }
        std::cout << i + 1 << " row - " << sum / n << "\n";
        std::cout << i + 1 << " col - " << sum2 / n << "\n";
      }
        return 0;
}
