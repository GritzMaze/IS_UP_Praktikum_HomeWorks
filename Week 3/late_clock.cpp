#include <iostream>
using namespace std;

int main() {
        int hour = 0;
        int minutes = 0;
        int diff = 0;
        cout << "Late clock" << endl;
        cin >> hour >> minutes;
        if(minutes >= 0 && minutes <=60) {
                if((minutes + 30) >= 60) {
                        hour++;
                        diff = ((minutes + 30) - 60);
                        minutes = 0 + diff;
                        cout << hour << ":" << minutes? cout << minutes : cout << "00";
                } else  cout << hour << ":" << minutes + 30;
        } else cout << "Invalid input";

        return 0;
}
