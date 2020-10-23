#include <iostream>
#include <cmath>
using namespace std;

int main() {
double a = 0, b = 0;
char sym;
cout << "Console calculator" << endl;
cin >> a >> sym >> b;
switch(sym) {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '/':
        cout << a / b;
        break;
    case '*':
        cout << a * b;
        break;
    default:
        cout << "Calculator can't recognise symbol.";
}
return 0;
}
