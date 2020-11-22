#include <iostream>

int main() {

        char arr[256];
        int counter = 0;
        int letters = 0;
        int longest = 0;
        int shortest = 100;
        int words = 1;
        std::cin.getline(arr, 256);

        while(arr[counter] != '\0')
        {
                counter++;
                if(arr[counter] == ' ')
                {
                        if(letters > longest) longest = letters;
                        if(letters < shortest) shortest = letters;
                        letters = 0;
                        words++;

                } else letters++;

                //validation
                if( arr[counter] == '!' || arr[counter] == '?' || arr[counter] == '.') break;
        }
        
        std::cout << words << " Words" << "\n";
        std::cout << "Longest word has " << longest << " letters" << "\n";
        std::cout << "Shortest word has "<< shortest;
        shortest == 1 ? std::cout << " letter" : std::cout << " letters";



        return 0;
}
