#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> number_array;
    int x;
    while (cin >> x) {
        number_array.push_back(x);
    }
    int len_number_array = number_array.size();
    bool found = false;
    for (int index = 0; index < len_number_array - 1; index++) {
        if (number_array[len_number_array - 1] == number_array[index]) {
            cout << index + 1 << " ";
            found = true;
        }
    }
    if (!found) {
        cout << "-1" << endl;
    } else {
        cout << endl;
    }
    return 0;
}
