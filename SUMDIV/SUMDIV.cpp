#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int _ = 0; _ < T; _++) {
        int n;
        cin >> n;
        int s = 0;
        int r = (int)sqrt(n);
        for (int i = 1; i <= r; i++) {
            if (n % i == 0) {
                s += i;
                if (i != n / i) {
                    s += n / i;
                }
            }
        }
        cout << s << endl;
    }
    return 0;
}
