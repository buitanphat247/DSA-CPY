#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long best_sum = LLONG_MIN;
    int best_i = -1;
    for (int i = 0; i < n; i++) {
        long long s = a[i] + a[(i + 1) % n];
        if (s > best_sum || (s == best_sum && i > best_i)) {
            best_sum = s;
            best_i = i;
        }
    }
    cout << a[best_i] << " " << a[(best_i + 1) % n] << endl;
    return 0;
}
