#include<bits/stdc++.h>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    int number_a, number_b;
    ss >> number_a >> number_b;
    string result = "";
    for (int item = number_a; item <= number_b; item++) {
        result += to_string(item) + " ";
    }
    cout << result << endl;
    return 0;
}
