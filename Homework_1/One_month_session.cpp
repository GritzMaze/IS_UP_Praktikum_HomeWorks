#include <iostream>
#include <cmath>

bool    isLeap(int year);
bool    isPrime(int num);
double  roundToSecondDigit(double d);

int main() {
        std::cout << "One month session \n";
        int year = 0;
        int days = 0;
        double sum = 0.0;
        std::cin >> year;
        if(isLeap(year)) days = 29;
        else days = 28;
        for(int i = 1; i <= days; i++)
        {
                if(i % 2 == 0) sum += 2.99;
                else if(isPrime(i)) sum += 2.00;
                else sum += 3.00;
        }
        double answer = sum /days;
        answer = answer * 100;
        std::cout << roundToSecondDigit(answer) / 100.0;


        return 0;
}

bool isLeap(int year) {
        if (year % 4 == 0)
        {
                if (year % 100 == 0)
                {
                        if (year % 400 == 0) return true;
                        else return false;
                } else return true;
        }
        else return false;
}

bool isPrime(int num) {
        if(num == 1) return false;
        for(int i = 2; i <= num / 2; i++)
        {
                if(num % i == 0) return false;
        }
        return true;
}

double roundToSecondDigit(double d)
{
  return floor(d + 0.5);
}
