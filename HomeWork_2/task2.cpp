#include <iostream>

// ARRAY 2 DIMENSIONS
const int N = 5;

void turnClockwise(int arr[N][N], int times) {
    int temp = 0, counter = 0, temp2 = 0;
    while(counter < times)
    {
        temp = arr[0][N];
        arr[0][N] = arr[0][0];
        temp2 = arr[N][N];
        arr[N][N] = temp;
        temp = arr[N][0];
        arr[N][0] = temp2;
        arr[0][0] = temp; 
        counter++;
    }

    std::cout << temp << " "<< temp2;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++)
            std::cout << arr[i][j] << " ";
    
    std::cout << "\n";
    }

}

int main() {
    // INPUT
    int arr[N][N] = {{1, 2, 3, 4, 5},
                    {4, 5, 6, 7, 8},
                    {3, 4, 5, 9, 0},
                    {5, 6, 9, 1, 2},
                    {6, 10, 11, 0, 1}};
    unsigned int n = 1;

    turnClockwise(arr, n);

    return 0;
}