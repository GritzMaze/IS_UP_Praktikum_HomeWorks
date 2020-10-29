#include <iostream>

int main() {
        std::cout << "Destroy number \n";
        double n = 0.0;
        std::cin >> n;
        if(n > 0) {
        n = n - 0.5;
        while(n > 0)
        {
                std::cout << n << " ";
                n -= 0.5;
        }
      }
      else std::cout << "Invalid input";

        return 0;
}
