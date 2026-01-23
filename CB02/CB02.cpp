#include<bits/stdc++.h>
using namespace std;

int main() {
    string number_string;
    getline(cin, number_string);
    stringstream ss(number_string);
    string number[2];
    ss >> number[0] >> number[1];
    cout << stoi(number[0]) + stoi(number[1]) << endl;
    return 0;
}
