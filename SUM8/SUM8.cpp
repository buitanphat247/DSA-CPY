#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int _ = 0; _ < T; _++) {
        int n;
        cin >> n;
        double x = 0.0;
        for (int i = n; i >= 1; i--) {
            x = sqrt(i + x);
        }
        cout << fixed << setprecision(5) << x << endl;
    }
    return 0;
}
