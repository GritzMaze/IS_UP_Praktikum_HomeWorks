#include <iostream>

int main() {
        int n = 0;
        std::cout << "Is Prime? \n";
        std::cin >> n;
        bool isPrime = true;
        if (n == 0 || n == 1) {
                isPrime = false;
        } else {
                for (int i = 2; i <= n / 2; i++) {
                        if (n % i == 0) {
                                isPrime = false;
                                break;
                        }
                }
        }
        if(isPrime) {
                std::cout << "YES";
        } else std::cout << "NO";
        return 0;
}
