#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    double s = 0.0;
    for (int i = 1; i <= n; i++) {
        int tich = i * (i + 1);
        s += 1.0 / (double)tich;
    }
    cout << fixed << setprecision(5) << s << endl;
    return 0;
}
