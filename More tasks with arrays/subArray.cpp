#include <iostream>

int main() {
        int arr[100], subArr[100];
        int n = 0, m = 0;
        std::cin >> n >> m;
        if(n > 100 || n < 2 || n < m) {
                std::cout << "Invalid array";
                return 1;
        }
        for(int i = 0; i < n; i++)
                std::cin >> arr[i];

        for(int i = 0; i < m; i++)
                std::cin >> subArr[i];

        for(int i = 0; i < n; i++)
        {
                if(arr[i] == subArr[0])
                {
                        for(int k = 1; k < m; k++)
                        {
                                if(arr[i + k - 1] != subArr[k]) break;
                                else if(k == m - 1 && arr[i + k - 1] == subArr[k]) {
                                        std::cout << "YES";
                                        return 2;
                                }
                        }
                }
        }
        std::cout << "NO";
        return 0;
}
