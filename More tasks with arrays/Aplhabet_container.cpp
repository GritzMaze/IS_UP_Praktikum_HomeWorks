#include <iostream>

int main() {
    char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
    char input[100];
    int charCount[26] = {0};
    int lenght = 0;

    std::cin.getline(input, 100);

    while(input[lenght] != '\0')
    {
      lenght++;
    }

    for(int i = 0; i < lenght; i++)
    {
      if(input[i] >= 'A' && input[i] <= 'Z')
      {
        input[i] += 32;
      }
      charCount[input[i]-97]++;
    }

    for(int i = 0; i < 26; i++)
    std::cout << alphabet[i] << " - " << charCount[i] << "\n";

  return 0;
}
