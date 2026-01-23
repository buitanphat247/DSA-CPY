#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    vector<int> B = A;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) {
            int left = (i - 1 >= 0) ? A[i-1] : 0;
            int right = (i + 1 < n) ? A[i+1] : 0;
            B[i] = A[i] + abs(left - right);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << B[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;
    return 0;
}
