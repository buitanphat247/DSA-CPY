#include<bits/stdc++.h>
using namespace std;

int main() {
    string number_string;
    getline(cin, number_string);
    int number_a, number_b;
    sscanf(number_string.c_str(), "%d %d", &number_a, &number_b);
    cout << number_a + number_b << endl;
    cout << number_a - number_b << endl;
    cout << number_a * number_b << endl;
    if (number_b == 0) {
        cout << "ERROR" << endl;
    } else {
        cout << fixed << setprecision(2) << (double)number_a / number_b << endl;
    }
    return 0;
}
