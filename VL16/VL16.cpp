#include<bits/stdc++.h>
using namespace std;

long long lcm(int a, int b) {
    return (long long)a * b / __gcd(a, b);
}

int main() {
    int number_a, number_b;
    cin >> number_a >> number_b;
    cout << lcm(abs(number_a), abs(number_b)) << endl;
    return 0;
}
