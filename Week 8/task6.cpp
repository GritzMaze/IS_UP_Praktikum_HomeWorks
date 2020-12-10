#include <iostream>

void checkEmail(char arr[], int lenght);

int main() {
  char arr[256];
  int counter = 0;
  std::cin.getline(arr, 256);
  while(arr[counter] != '\0')
  {
    counter++;
  }
  checkEmail(arr, counter);
  return 0;
}

void checkEmail(char arr[], int length)
{
  int letterCountBefore = 0;
  int letterCountAfter = 0;
  int letterAfterDotCount = 0;
  bool dotAfterAtFound = false;
  bool atFound = false;

  for(int i = 0; i < length; i++)
  {
    char currentLetter = arr[i];
    if(currentLetter == ' ') std::cout << "Space not allowed!";

    if(atFound == false && currentLetter == '@')
    {
      atFound = true;
      continue;
    }

    if(atFound == true && dotAfterAtFound == false && currentLetter == '.')
    {
      if(letterCountAfter == 0) std::cout << "Dot after @";
      dotAfterAtFound = true;
      continue;
    }

    if(atFound == false && dotAfterAtFound == false) {
           letterCountBefore++;
     }

    if(atFound == true && dotAfterAtFound == false) {
              letterCountAfter++;
    }

    if (atFound == true && dotAfterAtFound == true) {
            letterAfterDotCount++;
        }
      }

      if(!atFound) std::cout << "Missing @";
      else if(atFound && !dotAfterAtFound) std::cout << "Missing Dot";
      else if(letterCountBefore < 6 || letterCountAfter == 0) std::cout << "Email not long enought";
      else if(letterCountAfter + letterAfterDotCount < 6) std::cout << "Invalid Domain.";
      else if(letterAfterDotCount < 1) std::cout << "Invalid Domain";
      else std::cout << "Valid email.";

  }
