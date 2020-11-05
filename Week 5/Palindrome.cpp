#include <iostream>

int main() {
        std::cout << "Palindrome \n";
        int inputNumber, reversedNumber = 0, digit = 0, copyNumber = 0;
        std::cin >> inputNumber;
        copyNumber = inputNumber;
        do {
                digit = copyNumber % 10;
                reversedNumber = (reversedNumber * 10) + digit;
                copyNumber = copyNumber / 10;
        } while(copyNumber != 0);
        if(reversedNumber == inputNumber) std::cout << "YES";
        else std::cout <<"NO";
        return 0;
}
