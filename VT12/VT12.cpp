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
    cout << *max_element(dp.begin(), dp.end()) - *min_element(dp.begin(), dp.end()) << endl;
    return 0;
}
