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
    int n, k;
    cin >> n >> k;
    long long result = sovlegiaithua(n) / (sovlegiaithua(k) * sovlegiaithua(n - k));
    cout << result << endl;
    return 0;
}
