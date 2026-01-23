#include<bits/stdc++.h>
using namespace std;

int main() {
    int number_n;
    cin >> number_n;
    vector<int> number_list(number_n);
    for (int i = 0; i < number_n; i++) {
        cin >> number_list[i];
    }
    sort(number_list.begin(), number_list.end(), greater<int>());
    for (int i = 0; i < number_n; i++) {
        cout << number_list[i];
        if (i < number_n - 1) cout << " ";
    }
    cout << endl;
    return 0;
}
