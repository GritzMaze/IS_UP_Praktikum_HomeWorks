#include <iostream>

int main() {
        double a = 0.0, sum = 1.0;
        int b = 0, i = 0;
        std::cout << "Powering \n";
        std::cin >> a >> b;
        if(a == 0 && b == 0)
        {
                std::cout << "unknown";
        } else if(b >= 0) {
                while(i < b) {
                        sum *= a;
                        i++;
                }
                std::cout << sum;
        } else {
                i = b;
                while(i) {
                        sum *= 1/a;
                        i++;
                }
                std::cout << sum;
        }
        return 0;
}
