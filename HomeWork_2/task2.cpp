#include <iostream>

// ARRAY 2 DIMENSIONS
const int N = 5;

void turnClockwise(int arr[N][N], int times) {
        int temp = 0, counter = 0, temp2 = 0;
        while(counter < times)
        {
                temp = arr[0][0];
                arr[0][0] = arr[N-1][0];
                arr[N-1][0] = arr[N-1][N-1];
                arr[N-1][N-1] = arr[0][N-1];
                arr[0][N-1] = temp;
                temp = arr[1][1];
                arr[1][1] = arr[1][N-2];
                arr[1][N-2] = arr[N-2][N-2];
                arr[N-2][N-2] = arr[N-2][1];
                arr[N-2][1] = temp;
                counter++;
        }


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
