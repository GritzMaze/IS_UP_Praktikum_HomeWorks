#include <iostream>

bool checkSubstr(const char *str, const char *substr)
{
        // if reaches the last character
        if(*substr == '\0') return false;
        
        if(*str == *substr) return true;
        else return checkSubstr(str, substr + 1);

}

bool check(const char *str, const char *substr) {
        //If reaches the last character of string
        if(*str == '\0') return true;

        if(checkSubstr(str, substr)) return check(str + 1, substr);
        else return false;
}


int main() {
        char str[256] = "goodbook";
        char substr[256] = "gbkod";

//std::cin.getline(str, 256);
//std::cin.getline(substr, 256);

        check(str, substr) ? std::cout << "YES" : std::cout <<"NO";

        return 0;
}
