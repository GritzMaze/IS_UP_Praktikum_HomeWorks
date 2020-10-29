#include <iostream>

int main() {
        int n = 0, sum = 1;
        std::cout << "Factorial \n";
        std::cin >> n;
        for(int i = 1; i <= n; i++)
        {
                sum *= i;
        }
        std::cout << sum;

        return 0;
}
