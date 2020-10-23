#include <iostream>
using namespace std;

int main() {
cout << "Division by? \n";
int n = 0;
cin >> n;
if(n > 0 && n <= 100){
for(int i = 1; i <= 100; i++)
{
  if(i % n == 0)
  {
    cout << i <<" ";
  }
}
} else cout << "Invalid input";
  return 0;
}
