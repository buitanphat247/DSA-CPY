#include<bits/stdc++.h>
using namespace std;

void sum_divisors(int number) {
    int sum_solve = 0;
    vector<int> list_num;
    for (int i = 1; i <= sqrt(number); i++) {
        if (number % i == 0) {
            sum_solve += i;
            list_num.push_back(i);
            if (i * i != number) {
                list_num.push_back(number / i);
                sum_solve += number / i;
            }
        }
    }
    sum_solve -= number;
    if (sum_solve == number) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int number;
    cin >> number;
    sum_divisors(abs(number));
    return 0;
}
