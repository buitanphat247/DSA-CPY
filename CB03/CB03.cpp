#include<bits/stdc++.h>
using namespace std;

int main() {
    string number_string;
    getline(cin, number_string);
    stringstream ss(number_string);
    string number;
    int solve = 0;
    while (ss >> number) {
        solve += stoi(number);
    }
    cout << solve << endl;
    return 0;
}
