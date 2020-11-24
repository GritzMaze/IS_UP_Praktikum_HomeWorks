#include <iostream>

int main() {
        int arr[100], firstHalf[50], secondHalf[50];
        int n = 0, middle = 0, counter = 0;
        std::cin >> n;
        if(n > 100 || n < 2) {
                std::cout << "Invalid array";
                return 1;
        }
        for(int i = 0; i < n; i++)
                std::cin >> arr[i];

        for(int i = 0; i < n; i++)
        {
                if(i == n/2 && n % 2 != 0) middle = arr[i];
                if(i < n/2) firstHalf[i] = arr[i];
                else if(i >= n/2) {
                        secondHalf[counter] = arr[i];
                        counter++;
                }
        }

        std::cout << "First array - [";
        for(int i = 0; i < n/2; i++)
        {
                std::cout << firstHalf[i];
                if(i < n/2 - 1) std::cout << ", ";
        }
        std::cout << "] \n";


        std::cout << "SecondArray - [";
        for(int i = 0; i < n/2; i++)
        {
                std::cout << secondHalf[i];
                if(i < n/2 - 1) std::cout << ", ";
        }
        std::cout << "] \n";
        if(n % 2 != 0) std::cout << "Middle - " << middle;
        return 0;
}
