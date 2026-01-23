#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int _ = 0; _ < T; _++) {
        int n;
        cin >> n;
        double res = 2.0 * n / (n + 1);
        cout << fixed << setprecision(8) << res << endl;
    }
    return 0;
}
