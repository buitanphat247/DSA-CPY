#include<bits/stdc++.h>
using namespace std;

int main() {
    string number;
    cin >> number;
    string number_reverse = number;
    reverse(number_reverse.begin(), number_reverse.end());
    cout << stoi(number_reverse) << endl;
    return 0;
}
