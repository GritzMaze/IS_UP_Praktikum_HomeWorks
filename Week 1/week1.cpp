#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    // Declaring variables
    int a, b; // Task 1 , 4
    int c; // Task 1.2, 3
    int x, y; // Task 2
    int sum; // Task 3
    double t; // Task 5

    // Task 0
    cout << "Korona 4ao";
    cout << endl;

    // Task 1.1

    cout << "Area of a rectangle"<<endl;
    cout << "Enter a: ";
    cin >> a;
    cout << endl;
    cout << "Enter B: ";
    cin >> b;
    cout << endl;
    cout << "Perimeter = " << (2 * a) + (2 * b) << " Area = " << a * b << endl;

    // Task 1.2

    cout << "Area of a triangle" << endl;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2; // half perimeter
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Perimeter = " << p + p << " Area = " << (int)(area * 100 + .5) / 100.0;
    cout << endl;

    // Task 2

    cout << "Number swap" << endl;
    cin >> x >> y;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << x <<" " << y << endl;

    // Task 3

    cout << "Three numbers" << endl;
    cin >> c;
    sum = 0;
    cout << c / 100 << " " << c / 10 % 10 << " " << c % 10 << endl;
    while(c) {
        sum = sum + (c % 10);
        c = c / 10;
    }
    cout << sum;
    cout << endl;

    // Task 4

    cout << "Turtles" << endl;
    cin >> a >> b;
    cout << setprecision(2) << fixed << (double)(a * 2.50) + (double)(b * 4.00) << " lv." << endl;

    // Task 5
    cout << "Celsius and Fahrenheit" << endl;
    cin >> t;
    cout <<((t * (9.00 / 5.00)) + 32.00) << " " << ((t - 32) * (5.00 / 9.00)) << endl;


    // Task 6
    cout << "Aw man, Creeper" << endl;
    cin >> x;
    double head = x * x * x;
    double body = x * (2 * x) * (x / 2.0);
    double leg  = x * ((3 * x) / 4.0) * (x / 2.0);
    cout << "The creeper's volume is " << head + body + (2 * leg);
}

