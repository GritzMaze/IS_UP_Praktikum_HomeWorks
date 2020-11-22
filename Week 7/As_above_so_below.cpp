#include <iostream>

int main() {
        int n = 0, sumAb = 0, sumBe = 0;
        int arr[100][100];
        std::cin >> n;
        for(int i = 0; i < n; i++)
                for(int k = 0; k < n; k++)
                {
                        std::cin >> arr[i][k];
                        if(k > i) sumAb += arr[i][k];
                        else if(i > k) sumBe += arr[i][k];
                }
        std::cout << "\n";
        std::cout << "Above Diagonal - " << sumAb << "\n";
        std::cout << "Below Diagonal - " << sumBe << "\n";
        return 0;
}
