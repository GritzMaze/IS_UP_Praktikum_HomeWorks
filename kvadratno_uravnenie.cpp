#include <iostream>
#include <cmath>
using namespace std;

int main() {
double a = 0, b = 0, c = 0;
cout << "Kvadratno uravnenie" << endl;
cin >> a >> b >> c;
if( a == 0) {
    cout << c / -b;
}
else {
    double D = b * b - 4 * (a * c);
    if(D > 0) {
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
        cout << "x1: " << x1 <<" x2: " << x2;
    } else {
    if(D == 0) {
        cout << (-b)/(2*a);
    }
    else cout << "No roots in this equation";
    }
}

return 0;
}
