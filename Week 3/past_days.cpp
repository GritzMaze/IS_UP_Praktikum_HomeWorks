#include <iostream>
using namespace std;

int main() {
cout << "Past days" << endl;
int days = 0, month = 0, year = 0;
int sum = 0;
cin >> days >> month >> year;
switch(month) {
  case 1:
    sum = days;
    break;
  case 2:
    sum = days + 31;
    break;
  case 3:
    sum = (((month - 1) * 31) - 3) + days;
    break;
  case 4:
    sum = (((month - 1) * 31) - 4) + days;
    break;
  case 5:
    sum = (((month - 1) * 31) - 4) + days;
    break;
  case 6:
    sum = (((month - 1) * 31) - 5) + days;
    break;
  case 7:
    sum = (((month - 1) * 31) - 5) + days;
    break;
  case 8:
    sum = (((month - 1) * 31) - 5) + days;
    break;
  case 9:
    sum = (((month - 1) * 31) - 6) + days;
    break;
  case 10:
    sum = (((month - 1) * 31) - 6) + days;
    break;
  case 11:
    sum = (((month - 1) * 31) - 7) + days;
    break;
  case 12:
    sum = (((month - 1) * 31) - 7) + days;
    break;
    default:
    cout << "Invalid combination.";
    break;
}
      if (month > 2) {
        if (year % 4 == 0)
        {
          if (year % 100 == 0)
            {
              if (year % 400 == 0) sum = sum + 1;
            } else sum = sum + 1;
          }
        }
cout << sum;

return 0;
}
