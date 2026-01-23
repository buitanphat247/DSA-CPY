#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "NO" << endl;
    } else {
        int P = a + b + c;
        double p = P / 2.0;
        double S = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << P << " " << fixed << setprecision(2) << S << endl;
    }
    return 0;
}
