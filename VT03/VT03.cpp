#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> number_list(n);
    for (int i = 0; i < n; i++) {
        cin >> number_list[i];
    }
    int max_index = 0;
    long long max_value = LLONG_MIN;
    for (int index = 0; index < n; index++) {
        if (number_list[index] >= max_value) {
            max_index = index;
            max_value = number_list[index];
        }
    }
    cout << max_index << endl;
    return 0;
}
