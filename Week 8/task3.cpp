#include <iostream>

double discount(double price, double discount);

int main() {
        double a = 0, b = 0;
        std::cin >> a >> b;

        std::cout << discount(a, b) << "lv.";

        return 0;
}

double discount(double price, double discount) {
        return price - (price * (discount / 100));
}
