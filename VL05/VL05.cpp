#include<bits/stdc++.h>
using namespace std;

int main() {
    int sum_result = 0;
    int end_index;
    cin >> end_index;
    int limit = end_index * 3 + 1;
    for (int i = 1; i <= limit; i++) {
        if (i % 2 == 1) {
            sum_result += i;
        } else {
            sum_result += i * -1;
        }
    }
    cout << sum_result << endl;
    return 0;
}
