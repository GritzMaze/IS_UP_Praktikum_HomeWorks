#include <iostream>

int main() {
        std::cout << "Reversed Number \n";
        int inputNumber = 0, reversedNumber = 0, copyNumber = 0, digit = 0;
        std::cin >> inputNumber;
        copyNumber = inputNumber;
        do {
                digit = copyNumber % 10;
                reversedNumber = (reversedNumber * 10) + digit;
                copyNumber = copyNumber / 10;
        } while(copyNumber != 0);
        if(inputNumber % 2 == 0 && reversedNumber % 2 == 0 || inputNumber % 2 != 0 && reversedNumber % 2 != 0)
                std::cout << "Yes";
        else std::cout << "No";
        return 0;
}
