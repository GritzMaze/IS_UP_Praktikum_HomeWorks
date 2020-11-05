#include <iostream>
#include <cmath>

int main() {
        std::cout << "Delete the hundreds \n";

        int n = 0, m = 0;
        int firstDigit, lastTwoDigits, number;
        std::cin >> n >> m;
        for(int i = n; i <= m; i++)
        {
                firstDigit = i / 1000;
                lastTwoDigits = i % 100;
                number = firstDigit * 100 + lastTwoDigits;
                if(number % 11 == 0) std::cout << number << " \n";
        }

        return 0;
}
