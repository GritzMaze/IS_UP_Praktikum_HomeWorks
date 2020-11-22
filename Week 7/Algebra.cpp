#include <iostream>

int main() {
        int n = 0;
        int arr1[100][100];
        int arr2[100][100];
        std::cin >> n;
        // Matrix 1
        for(int i = 0; i < n; i++)
                for(int k = 0; k < n; k++)
                {
                        std::cin >> arr1[i][k];
                }

        // Matrix 2
        for(int i = 0; i < n; i++)
                for(int k = 0; k < n; k++)
                {
                        std::cin >> arr2[i][k];
                }

        std::cout << "\n";

        // A + B
        for(int i = 0; i < n; i++)
        {
                for(int k = 0; k < n; k++)
                {
                        std::cout << arr1[i][k] + arr2[i][k];
                        std::cout<< " ";
                }
                std::cout << "\n";
        }

        std::cout << "\n";

        // -(A)
        for(int i = 0; i < n; i++)
        {
                for(int k = 0; k < n; k++)
                {
                        std::cout << arr1[i][k]*(-1);
                        std::cout<< " ";
                }
                std::cout << "\n";
        }

        std::cout << "\n";

        // 2A + 3B
        for(int i = 0; i < n; i++)
        {
                for(int k = 0; k < n; k++)
                {
                        std::cout << (arr1[i][k]*2) + (arr2[i][k]*3);
                        std::cout<< " ";
                }
                std::cout << "\n";
        }


        return 0;
}
