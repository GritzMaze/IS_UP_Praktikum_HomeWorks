#include <iostream>

int main() {
        std::cout << "Perfect number \n";
        int num = 0, sum = 0;
        std::cin >> num;
        if(num >= 0 && num < 4) std::cout << "Perfect!";
        else {
                for(int i = 1; i < num; i++)
                {
                        if(num % i == 0) {
                                sum += i;
                        }
                }
                if( num == sum) {
                        std::cout << "Perfect!";
                }
                else std::cout << "Not perfect!";
        }
        return 0;
}
