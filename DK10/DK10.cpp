#include<bits/stdc++.h>
using namespace std;

int main() {
    int month, year;
    cin >> month >> year;
    if (month < 1 || month > 12 || year <= 0) {
        cout << "INVALID" << endl;
    } else {
        bool is_leap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
        if (month == 2) {
            if (is_leap) {
                cout << 29 << endl;
            } else {
                cout << 28 << endl;
            }
        } else if (month == 1 || month == 3 || month == 5 || month == 7 || 
                   month == 8 || month == 10 || month == 12) {
            cout << 31 << endl;
        } else {
            cout << 30 << endl;
        }
    }
    return 0;
}
