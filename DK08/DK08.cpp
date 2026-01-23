#include<bits/stdc++.h>
using namespace std;

int main() {
    string a_str, op, b_str;
    cin >> a_str >> op >> b_str;
    double a = stod(a_str);
    double b = stod(b_str);
    if (op == "+") {
        double result = a + b;
        cout << fixed << setprecision(2) << result << endl;
    } else if (op == "-") {
        double result = a - b;
        cout << fixed << setprecision(2) << result << endl;
    } else if (op == "*") {
        double result = a * b;
        cout << fixed << setprecision(2) << result << endl;
    } else if (op == "/") {
        if (b == 0) {
            cout << "Math Error" << endl;
        } else {
            double result = a / b;
            cout << fixed << setprecision(2) << result << endl;
        }
    }
    return 0;
}
