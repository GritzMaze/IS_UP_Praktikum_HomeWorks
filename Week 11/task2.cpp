#include <iostream>

int reverseNum(int num, int n = 0) {
  if(num == 0)
  {
    return n;
  }
  int digit = num % 10;
  int prefix = n * 10 + digit;
  return reverseNum(num / 10, prefix);
}

int main()
{
std::cout << reverseNum(3211);
return 0;
}
