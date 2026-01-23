#include<bits/stdc++.h>
using namespace std;

int main() {
    string number_str;
    getline(cin, number_str);
    int number_a, number_b;
    sscanf(number_str.c_str(), "%d %d", &number_a, &number_b);
    cout << (number_a + number_b) * 2 << endl;
    cout << number_a * number_b << endl;
    return 0;
}
