#include <iostream>

int main() {
        int n = 0, m = 0, num = 0;
        int arr[100][100];
        std::cin >> n >> m;
        for(int i = 0; i < n; i++)
                for(int k = 0; k < m; k++)
                {
                        std::cin >> arr[i][k];
                }

        std::cin >> num;
        std::cout << "\n";
        std::cout << "Positions - ";
        bool flag = false;
        for(int i = 0; i < n; i++)
        {
                for(int k = 0; k < m; k++)
                {
                        if(arr[i][k] == num) {
                                std::cout << "(" << i+1<<", "<<k+1<<") ";
                                flag = true;
                        }
                }
        }
        if(!flag) std::cout << "Element not found!";
        return 0;
}
