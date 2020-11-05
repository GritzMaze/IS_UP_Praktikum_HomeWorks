#include <iostream>

int main() {
        std::cout << "Diamond \n";
        int n = 0;
        std::cin >> n;
        for(int rows = 0; rows < n; rows++)
        {
                for(int j = n - 1; j >= rows; j--)
                {
                        std::cout << " ";
                }
                for(int col = 1; col <= (rows * 2) - 1; col++)
                {
                        std::cout <<"*";
                }
                std::cout << "\n";
        }
        for(int rows = n; rows >= 1; rows--)
        {
                for(int j = rows; j < n; j++)
                {
                        std::cout << " ";
                }
                for(int col = 1; col <= (rows * 2) - 1; col++)
                {
                        std::cout <<"*";
                }
                std::cout << "\n";
        }
        return 0;
}
