#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int solve = INT_MIN;
    for (int i = 0; i < n; i++) {
        int item;
        cin >> item;
        solve = max(solve, item);
    }
    cout << solve << endl;
    return 0;
}
