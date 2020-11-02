#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {
        std::cout << "Guess the number! \n";
        int num = 0, counter = 0;
        int n = 0;
        srand (time(NULL));
        num = rand() % 1001;
        if(n >= 0 && n <= 1000) {
                while (1) {
                        counter++;
                        std::cin >> n;
                        if(n > num) std::cout << "Lower! \n";
                        else if (n < num) std::cout << "Higher! \n";
                        else if(n == num) break;
                }
                if(counter == 1) std::cout << "Chackpot! You are really good at this!";
                else std::cout << "Chackpot! - It took you " << counter <<" tries!";
        } else std::cout << "Enter a number between 0 and 1000";
        return 0;
}
