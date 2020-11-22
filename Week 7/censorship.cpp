#include <iostream>

int main() {

        char arr[256];
        char str;
        int counter = 0;
        int br = 0;
        std::cin.getline(arr, 256);
        std::cin >> str;

        while(arr[counter] != '\0')
        {
                counter++;
        }

        for(int i = 0; i < counter; i++)
        {
                if(arr[i] == str || arr[i] == str - 32)
                {
                        arr[i] = '*';
                        br++;
                }
        }
        std::cout << br << " times" << " \n";


        for(int i = 0; i < counter; i++)
        {
                std::cout << arr[i];
        }

        return 0;
}
