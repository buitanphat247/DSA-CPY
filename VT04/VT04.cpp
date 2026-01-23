#include<bits/stdc++.h>
using namespace std;

int main() {
    string number_n;
    int number_need_find;
    cin >> number_n >> number_need_find;
    number_need_find = abs(number_need_find);
    int n = stoi(number_n);
    vector<int> number_array(n);
    for (int i = 0; i < n; i++) {
        cin >> number_array[i];
        number_array[i] = abs(number_array[i]);
    }
    if (find(number_array.begin(), number_array.end(), number_need_find) != number_array.end()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
