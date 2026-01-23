#include<bits/stdc++.h>
using namespace std;

int count_divisors(int number) {
    if (number < 0) return 0;
    int count = 0;
    for (int i = 1; i <= sqrt(number); i++) {
        if (number % i == 0) {
            if (i * i == number) {
                count += 1;
            } else {
                count += 2;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << count_divisors(abs(n)) << endl;
    return 0;
}
