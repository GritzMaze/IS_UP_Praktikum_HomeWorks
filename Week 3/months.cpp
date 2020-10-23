#include <iostream>
using namespace std;

int main() {
        int num = 0;
        cout << "Which moths it is?" << endl;
        cin >> num;
        switch(num) {
        case 1:
                cout << "January";
                break;
        case 2:
                cout << "February";
                break;
        case 3:
                cout << "March";
                break;
        case 4:
                cout << "April";
                break;
        case 5:
                cout << "May";
                break;
        case 6:
                cout << "June";
                break;
        case 7:
                cout << "July";
                break;
        case 8:
                cout << "August";
                break;
        case 9:
                cout << "September";
                break;
        case 10:
                cout << "Oktober";
                break;
        case 11:
                cout << "November";
                break;
        case 12:
                cout << "December";
                break;
        default:
                cout << "Invalid number [1, 12]";
                break;
        }
        cout << endl;
        cout << "Which season it is?" << endl;
        switch(num) {
        case 1:
        case 2:
                cout << "Winter";
                break;
        case 3:
        case 4:
        case 5:
                cout << "Spring";
                break;
        case 6:
        case 7:
        case 8:
                cout << "Summer";
                break;
        case 9:
        case 10:
        case 11:
                cout << "Autumn";
                break;
        case 12:
                cout << "Winter";
                break;
        default:
                cout << "Invalid number [1, 12]";
                break;
        }

        return 0;
}
