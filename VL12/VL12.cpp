#include<bits/stdc++.h>
using namespace std;

void division(int number) {
    vector<int> list_divisor;
    for (int i = 1; i <= sqrt(number); i++) {
        if (number % i == 0) {
            list_divisor.push_back(i);
            if (i != number / i) {
                list_divisor.push_back(number / i);
            }
        }
    }
    sort(list_divisor.begin(), list_divisor.end(), greater<int>());
    for (int i = 0; i < list_divisor.size(); i++) {
        cout << list_divisor[i];
        if (i < list_divisor.size() - 1) cout << " ";
    }
    cout << endl;
}

int main() {
    int number;
    cin >> number;
    if (number == 0) {
        cout << "INF" << endl;
    } else {
        division(abs(number));
    }
    return 0;
}
