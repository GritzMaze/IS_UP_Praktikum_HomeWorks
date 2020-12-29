#include <iostream>
#include <cstring>

int checkLength(char * arr) {
        int length = 0;
        while (arr[length] != '\0') {
                length++;
        }
        return length;
}

bool isMatch(const char a,
             const char b) {
        if (a == b) return true;
        else return false;
}

void toUpperCase(char & letter) {
        if (letter >= 'a' && letter <= 'z')
                letter = letter - ('a' - 'A');
}

void takeString(char * main, char * sec) {
        int length = 0, length2 = 0;
        length = checkLength(main);
        length2 = checkLength(sec);

        for (int i = 0; i < length; i++) {
                if (strchr(sec, main[i])) toUpperCase(main[i]);
        }

        /**
         *
         * Boring way and long way ( ͡ʘ ͜ʖ ͡ʘ)
         *
         **/

        // for(int i = 0; i < length; i++) {
        //     for(int j = 0; j < length2; j++)
        //     {
        //         if(isMatch(main[i], sec[j])){
        //             toUpperCase(main[i]);
        //             break;
        //         }
        //     }

        // }

        for(int i = 0; i < length; i++)
                std::cout << main[i];

}


int main() {
        char arr[256], arr2[256];
        std::cin.getline(arr, 256);
        std::cin.getline(arr2, 256);

        takeString(arr, arr2);

        return 0;
}
