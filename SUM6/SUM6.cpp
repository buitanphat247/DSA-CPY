#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int _ = 0; _ < T; _++) {
        int n;
        cin >> n;
        double x = sqrt(2);
        for (int i = 0; i < n - 1; i++) {
            x = sqrt(2 + x);
        }
        cout << fixed << setprecision(5) << x << endl;
    }
    return 0;
}
