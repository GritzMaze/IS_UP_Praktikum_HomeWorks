#include <iostream>

void createMatrix(int n);

int main() {

        int n;
        std::cin >> n;
        createMatrix(n);
        return 0;
}

void createMatrix(int n)
{
        for(int row = 1; row < n + 1; row++)
        {
                for(int col = 1; col < n + 1; col++)
                {
                        if(row == col) std::cout << row << " ";
                        else if(col > row) std::cout << col - row << " ";
                        else if(row > col) std::cout <<col * row << " ";
                }
                std::cout << "\n";
        }
}
