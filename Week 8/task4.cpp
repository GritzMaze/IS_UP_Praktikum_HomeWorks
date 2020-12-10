#include <iostream>

bool isArProgression(int arr[], int length);

int main() {

        int arr[] = {1, 2, 3, 4, 5};

        std::cout << std::boolalpha << isArProgression(arr, 5);

        return 0;
}

bool isArProgression(int arr[], int length)
{
        if(length == 1) return true;
        int d = arr[1] - arr[0];
        for(int i = 2; i < length; i++)
        {
                if(arr[i] - arr[i-1] != d) return false;
        }
        return true;
}
