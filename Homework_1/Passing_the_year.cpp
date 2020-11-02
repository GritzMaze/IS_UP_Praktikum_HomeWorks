#include <iostream>

int main() {
        std::cout << "Will you pass? \n";
        int n = 0;
/*
 * Настройки
 */
        bool isMoodGood = true; // Дали администрацията е в добро настроение
        bool isPaid = false; // Дали са платени таксите
        bool isBribePaid = true; // Дали е платена такса "Минаваш"
        std::cin >> n;
        if( n >= 0) {
                if(n >= 4) std::cout << "Good job, you passed!";
                else if (n >= 2 && isMoodGood) std::cout << "Good job, you passed!";
                else if(n == 1 && isMoodGood && isPaid) std::cout << "Good job, you passed!";
                else if(n == 0 && isMoodGood && isPaid && isBribePaid) std::cout << "Good job, you passed!";
                else std::cout << "September is a fun month!";
        } else std::cout << "The input should be a positive number!";
        return 0;
}
