#include<bits/stdc++.h>
using namespace std;

int main() {
    int number;
    cin >> number;
    double sum_result = 0.0;
    for (int i = 1; i < number; i++) {
        sum_result += 1.0 / (i + 1);
    }
    cout << fixed << setprecision(4) << sum_result << endl;
    return 0;
}
