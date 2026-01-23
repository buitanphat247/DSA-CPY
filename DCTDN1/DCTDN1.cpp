#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> dp(n);
    for (size_t i = 0; i < (size_t)n; i++) {
        cin >> dp[i];
    }
    vector<int> dp_temp(n, 1);
    for (size_t i = 1; i < (size_t)n; i++) {
        for (size_t j = 0; j < i; j++) {
            if (dp[i] > dp[j]) {
                dp_temp[i] = max(dp_temp[i], dp_temp[j] + 1);
            }
        }
    }
    cout << *max_element(dp_temp.begin(), dp_temp.end()) << endl;
    return 0;
}
