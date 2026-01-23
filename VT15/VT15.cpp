#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long result1 = (long long)a[n-1] * a[n-2] * a[n-3];
    long long result2 = (long long)a[0] * a[1] * a[n-1];
    cout << max(result1, result2) << endl;
    return 0;
}
