#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "WOW" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            double x = -(double)c / b;
            cout << fixed << setprecision(2) << x << endl;
        }
    } else {
        double delta = b * b - 4.0 * a * c;
        if (delta < 0) {
            cout << "NO" << endl;
        } else if (delta == 0) {
            double x = -(double)b / (2 * a);
            cout << fixed << setprecision(2) << x << endl;
        } else {
            double sqrt_delta = sqrt(delta);
            double x1 = (-b - sqrt_delta) / (2.0 * a);
            double x2 = (-b + sqrt_delta) / (2.0 * a);
            if (x1 > x2) {
                swap(x1, x2);
            }
            cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
        }
    }
    return 0;
}
