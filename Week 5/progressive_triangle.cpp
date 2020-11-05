#include <iostream>

int main() {
        std::cout << "Progressive triangle \n";
        int n = 0;
        std::cin >> n;
        for(int rows = 1; rows <= n; rows++)
        {
                for(int col = 1; col <= rows; col++)
                {
                        std::cout << col << " ";
                }
                std::cout << "\n";
        }
        return 0;
}
