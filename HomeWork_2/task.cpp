#include <iostream>

void shift(int rows) {
        for (int i = 1; i <= rows; i++) {
                for (int k = i; k <= 9; k++)
                        std::cout << k << " ";

                for (int j = 1; j <= i; j++)
                        std::cout << j << " ";

                std::cout << "\n";
        }


}

int main() {
        unsigned int m = 0;
        std::cin >> m;
        shift(m);
        return 0;
}
