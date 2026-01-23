#include<bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "WOW" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        double x = -b / a;
        cout << fixed << setprecision(2) << x << endl;
    }
    return 0;
}
