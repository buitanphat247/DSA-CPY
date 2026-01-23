#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;
    string res = "";
    while (i >= 0 || j >= 0 || carry) {
        int x = (i >= 0) ? (a[i] - '0') : 0;
        int y = (j >= 0) ? (b[j] - '0') : 0;
        int s = x + y + carry;
        res += (char)(s % 10 + '0');
        carry = s / 10;
        i--;
        j--;
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
    return 0;
}
