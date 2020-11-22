#include <iostream>

int main() {
        int n = 0, m = 0;
        int arr[100][100];
        std::cin >> n >> m;
        for(int i = 0; i < n; i++)
                for(int k = 0; k < m; k++)
                {
                        std::cin >> arr[i][k];
                }
        std::cout << "\n";
        int max = arr[0][0];
        int min = arr[0][0];
        for(int i = 0; i < n; i++)
                for(int k = 0; k < m; k++)
                {
                        if(arr[i][k] > max) max = arr[i][k];
                        if(arr[i][k] < min) min == arr[i][k];
                }

        std::cout << "Max is " << max << "\n";
        std::cout << "Min is " << min << "\n";
        return 0;
}
