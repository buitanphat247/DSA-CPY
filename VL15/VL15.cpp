#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    if (b == 0) {
        cout << "INVALID" << endl;
    } else {
        int g = gcd(abs(a), abs(b));
        a /= g;
        b /= g;
        if (b < 0) {
            a = -a;
            b = -b;
        }
        if (b == 1) {
            cout << a << endl;
        } else {
            cout << a << " " << b << endl;
        }
    }
    return 0;
}
