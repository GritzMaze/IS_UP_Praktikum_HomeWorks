#include <iostream>
using namespace std;

int main() {
    // Declaring variables
    int a; // Task 1, 2 , 3
    int b , c; // Task 2
    int digit; // Task 3
    int x, y; // Task 4
    int year; // Task 5
    char symbol; // Task 6

    // Task 1.1
    cout << "Divisibility" << endl;
    cin >> a;
    if(a % 2 == 0) cout << "YES";
    else cout << "NO";
    cout << endl;

    // Task 1.2

    cout << " 1.2" << endl;
    cin >> a;
    if(a % 2 == 0 && a % 3 == 0 && a % 5 == 0) cout << "YES";
    else cout << " NO";
    cout << endl;

    // Task 2
    cout << "Triangle validity" << endl;
    cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || b + c <= a) cout << " NO, it cannot exist";
    else cout << "YES, it can exist";
    cout << endl;

    // Task 3

    cout << "Unique numbers" << endl;
    cin >> a;
    if (a > 999 && a <= 9999) {
        bool isRepeated[10] = { 0 };
        bool isFinished = false;
        while(a)
        {
            digit = a % 10;
            a = a / 10;
            if(isRepeated[digit]) {
                cout << "NO, not all numbers are different!";
                isFinished = true;
                break;
            } else isRepeated[digit] = true;
        }
        if(!isFinished) cout << "YES, all the numbers are different!";
    }
    else cout << "Not a four digit number";
    cout << endl;

    // Task 4

    cout << "Quadrants" << endl;
    cin >> x >> y;
    if      (x > 0 && y > 0) cout << "First";
    else if (x < 0 && y > 0) cout << "Second";
    else if (x < 0 && y < 0) cout << "Third";
    else if (x > 0 && y < 0) cout << "Fourth";
    else if (x == 0 && y == 0) cout << "Center";
    else if (x == 0 && y != 0) cout << "Axis";
    else if (x != 0 && y == 0) cout << "Ordinate";
    else cout << "Not valid input";
    cout << endl;

    // Task 5

    cout << "Leap year" << endl;
    cin >> year;
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0) cout << year << " is a leap year.";
            else cout << year << " is not a leap year.";
        }
        else cout << year << " is a leap year.";
    }
    else cout << year << " is not a leap year.";
    cout << endl;

    // Task 6

    cout << "Lower and Upper case letters" << endl;
    cin >> symbol;
    if(symbol <= 'z' && symbol >= 'a') {
        cout << "Lower case letter";
        symbol = symbol - 32;
        cout << endl;
        cout << "Upper case is " << symbol;
    }
    else if (symbol <= 'Z' && symbol >= 'A') {
        cout << "Upper case letter";
        cout << endl;
        symbol = symbol + 32;
        cout << "Lower case is " << symbol;
    }
    else cout << "The character is not a letter";
    cout << endl;
    return 0;
}
