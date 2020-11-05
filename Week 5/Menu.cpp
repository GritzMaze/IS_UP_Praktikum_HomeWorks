#include <iostream>

int main() {
        std::cout << "Menu \n";
        int day = 0, n, tab = 0, counter = 0;
        float money;
        int sum = 0;
        float kufte = 2.00, turshiq = 3.00, salata = 3.50, bira = 6.66;
        std::cin >> money;
        if(money <= 0) {
                std::cout <<"No money, bro!";
                return 0;
        }
        std::cin >> day;
        if(day < 1 && day > 7) { std::cout << "Invalid input"; return 0;}
        if(day <= 3) {
                kufte   = kufte   - (kufte * 0.25);
                turshiq = turshiq - (turshiq * 0.25);
                salata  = salata  - (salata * 0.25);
                bira    = bira    - (bira * 0.25);
        } else if(day > 3 && day <= 5) {
                kufte   = kufte   - (kufte * 0.10);
        }
        else {
                kufte   = kufte   + (kufte * 0.30);
                turshiq = turshiq + (turshiq * 0.30);
                salata  = salata  + (salata * 0.30);
                bira    = bira    + (bira * 0.30);
        }
        while (std::cin >> n) {
                switch (n) {
                case 1:
                        sum += kufte;
                        break;
                case 2:
                        sum += turshiq;
                        break;
                case 3:
                        sum += salata;
                        break;
                case 4:
                        sum += bira;
                        break;
                default:
                        std::cout << "Invalid input \n";
                        break;
                }
                if(sum > money)
                {
                        std::cout << "Stiga poruchva! \n";
                        counter++;
                        if(counter == 3) break;
                }
        }
        std::cout << "The tab is " << sum << " levs" << std::endl;
        return 0;
}
