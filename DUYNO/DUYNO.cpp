#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        s.erase(0, s.find_first_not_of(" \t"));
        s.erase(s.find_last_not_of(" \t") + 1);
        if (s.length() > 0 && s[0] == s[s.length() - 1]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
