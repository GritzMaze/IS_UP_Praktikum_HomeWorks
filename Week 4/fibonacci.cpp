#include <iostream>

int main() {
        int n = 0, sum = 0;
        std::cout << "Fibonacci \n";
        int temp1 = 1, temp2 = 0;
        std::cin >> n;
        if(n < 0) std::cout << "Invalid";
        else {
                if(n == 0) std::cout << "0";
                else if(n == 1) std::cout << "1";
                else {
                        std::cout << temp2 << " " << temp1 << " ";
                        for(int i = 3; i <= n; i++) {
                                sum = temp1 + temp2;
                                temp2 = temp1;
                                temp1 = sum;
                                std::cout << sum << " ";
                        }
                }
        }
        return 0;
}
