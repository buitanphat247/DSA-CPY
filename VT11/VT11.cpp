#include<bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    vector<int> dp;
    int x;
    while (cin >> x) {
        dp.push_back(x);
    }
    int len_dp = dp.size();
    if (len_dp < 2) {
        for (int i = 0; i < len_dp; i++) {
            cout << dp[i];
            if (i < len_dp - 1) cout << " ";
        }
        cout << endl;
    } else {
        vector<int> new_array(dp.begin() + 1, dp.end() - 1);
        sort(new_array.begin(), new_array.end());
        cout << dp[0] << " ";
        for (int i = 0; i < new_array.size(); i++) {
            cout << new_array[i];
            if (i < new_array.size() - 1) cout << " ";
        }
        cout << " " << dp[len_dp - 1] << endl;
    }
    return 0;
}
