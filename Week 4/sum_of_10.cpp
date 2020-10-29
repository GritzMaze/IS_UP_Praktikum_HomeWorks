#include <iostream>

int main() {
        std::cout << "Sum of 10: \n";

        int n = 0, sum = 0;
        for(int i = 0; i < 10; i++)
        {
                std::cin >> n;
                sum = sum + n;
        }
        std::cout << sum;
        return 0;
}
