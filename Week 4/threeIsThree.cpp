#include <iostream>

int main() {
        int n = 0, digit = 0, sum = 1;
        std::cout << "3 is 3 \n";
        std:: cin >> n;
        if((n >= 100 && n <= 999) || (n >= -999 && n <= -100))
        {
                while(n) {
                        sum *= n % 10;
                        n = n / 10;
                }
                if((sum >= 100) || (sum <= -100)) {
                        std::cout << "YES";
                } else std::cout << "No";
        } else std::cout << "Not a three digit number or NaN";


        return 0;
}
