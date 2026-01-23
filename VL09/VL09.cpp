#include<bits/stdc++.h>
using namespace std;

long long sovlegiaithua(int end_index) {
    if (end_index < 0) return -1;
    long long tich = 1;
    for (int i = 1; i <= end_index; i++) {
        tich *= i;
    }
    return tich;
}

int main() {
    string x_str;
    int n;
    cin >> x_str >> n;
    double x = stod(x_str);
    double S = 0.0;
    for (int i = 1; i <= n; i++) {
        double power = 1.0;
        for (int j = 0; j < i; j++) {
            power *= x;
        }
        S += power / sovlegiaithua(i);
    }
    cout << fixed << setprecision(2) << S << endl;
    return 0;
}
