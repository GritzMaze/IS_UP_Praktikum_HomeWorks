#include <iostream>

int recStrlen(const char *arr) {
  if(*arr == '\0') return 0;

  return 1 + recStrlen(arr + 1);
}

int countLetter(const char *arr) {
  if(*arr == '\0') return 0;

  if((*arr >= 'A' && *arr <= 'Z') || (*arr >= 'a' && *arr <= 'z')) return 1 + countLetter(arr + 1);
  else return countLetter(arr + 1);

}

int main()
{
char str[256] = "Happy New Year";

int a = recStrlen(str);
std::cout << a << " \n";
std::cout << countLetter(str);

return 0;
}
