#include<bits/stdc++.h>
using namespace std;

int main() {
    string str_number;
    getline(cin, str_number);
    stringstream ss(str_number);
    int solve_max = INT_MIN;
    int it;
    while (ss >> it) {
        solve_max = max(solve_max, it);
    }
    cout << solve_max << endl;
    return 0;
}
