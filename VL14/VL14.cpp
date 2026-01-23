#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int number_a, number_b;
    cin >> number_a >> number_b;
    cout << gcd(abs(number_a), abs(number_b)) << endl;
    return 0;
}
