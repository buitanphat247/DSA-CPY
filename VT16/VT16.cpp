#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a;
    int x;
    while (cin >> x) {
        if (x == 0) break;
        a.push_back(x);
    }
    vector<int> negatives;
    for (int x : a) {
        if (x < 0) {
            negatives.push_back(x);
        }
    }
    if (negatives.empty()) {
        cout << "NOT FOUND" << endl;
    } else {
        for (int i = 0; i < negatives.size(); i++) {
            cout << negatives[i];
            if (i < negatives.size() - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
