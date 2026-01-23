#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (k == 0) {
        for (int i = 1; i <= n; i++) {
            cout << i;
            if (i < n) cout << " ";
        }
        cout << endl;
    } else if (n % (2 * k) != 0) {
        cout << -1 << endl;
    } else {
        vector<int> res;
        for (int i = 1; i <= n; i += 2 * k) {
            for (int j = i + k; j < i + 2 * k; j++) {
                res.push_back(j);
            }
            for (int j = i; j < i + k; j++) {
                res.push_back(j);
            }
        }
        for (int i = 0; i < res.size(); i++) {
            cout << res[i];
            if (i < res.size() - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
