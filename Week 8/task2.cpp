#include <iostream>

bool isPrime(int a);

int main() {

        int a = 0, b = 0;
        std::cin >> a >> b;
        if(isPrime(a) && isPrime(b) && b == a + 2) std::cout << "True";
        else std::cout << "False";
        return 0;
}

bool isPrime(int a)
{
        if(a == 1) return false;
        if(a == 2) return false;
        for(int i = 2; i <= a / 2; i++)
        {
                if(a % i == 0) return false;
        }
        return true;   
}
