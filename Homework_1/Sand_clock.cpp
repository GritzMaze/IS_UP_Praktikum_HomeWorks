#include <iostream>

int main() {
        std::cout << "Sand Clock \n";
        int n = 0;
        std::cin >> n;
        for(int rows = 0; rows < n; rows++)
        {
                for(int col = 0; col < n; col++) {
                        if(rows == 0 || rows == n - 1) std::cout << "*";
                        else if(col == rows || (n - 1) - rows == col) std::cout << "*";
                        else std::cout << " ";
                }
                std::cout << std::endl;
        }

        return 0;
}
