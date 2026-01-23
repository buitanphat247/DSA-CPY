#include<bits/stdc++.h>
using namespace std;

int main() {
    int number_a, number_b;
    cin >> number_a >> number_b;
    int sum_solve = 0;
    for (int i = number_a; i <= number_b; i++) {
        if (i % 2 == 0) {
            sum_solve += i;
        }
    }
    cout << sum_solve << endl;
    return 0;
}
