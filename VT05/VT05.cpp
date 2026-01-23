#include<bits/stdc++.h>
using namespace std;

int main() {
    int number_n, number_need_count;
    cin >> number_n >> number_need_count;
    number_need_count = abs(number_need_count);
    vector<int> number_array(number_n);
    for (int i = 0; i < number_n; i++) {
        cin >> number_array[i];
        number_array[i] = abs(number_array[i]);
    }
    map<int, int> number_dict;
    for (int item : number_array) {
        number_dict[item]++;
    }
    if (number_dict.find(number_need_count) == number_dict.end()) {
        cout << 0 << endl;
    } else {
        cout << number_dict[number_need_count] << endl;
    }
    return 0;
}
