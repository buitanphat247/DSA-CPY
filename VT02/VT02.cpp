#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> set_temp;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        set_temp.insert(x);
    }
    vector<int> list_temp(set_temp.begin(), set_temp.end());
    sort(list_temp.begin(), list_temp.end());
    if (list_temp.size() < 2) {
        cout << "NOT FOUND" << endl;
    } else {
        cout << list_temp[list_temp.size() - 2] << endl;
    }
    return 0;
}
