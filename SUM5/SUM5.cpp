#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    vector<int> queries;
    for (int _ = 0; _ < T; _++) {
        int n;
        cin >> n;
        queries.push_back(n);
    }
    int max_n = *max_element(queries.begin(), queries.end());
    vector<double> H(max_n + 1, 0.0);
    for (int i = 1; i <= max_n; i++) {
        H[i] = H[i-1] + 1.0 / i;
    }
    for (int n : queries) {
        cout << fixed << setprecision(5) << H[n] << endl;
    }
    return 0;
}
