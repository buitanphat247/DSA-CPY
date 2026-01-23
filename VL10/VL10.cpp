#include<bits/stdc++.h>
using namespace std;

int main() {
    string str_num;
    cin >> str_num;
    if (str_num[0] == '-') {
        cout << str_num.length() - 1 << endl;
    } else {
        cout << str_num.length() << endl;
    }
    return 0;
}
