#include<bits/stdc++.h>
using namespace std;

int main() {
    string str_number;
    getline(cin, str_number);
    stringstream ss(str_number);
    int a, b;
    ss >> a >> b;
    cout << abs(a - b) << endl;
    return 0;
}
