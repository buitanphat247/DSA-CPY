#include<bits/stdc++.h>
using namespace std;

int main() {
    int number_a, number_b;
    cin >> number_a >> number_b;
    bool found = false;
    for (int i = number_b - 1; i > number_a; i--) {
        if (i % 3 == 0) {
            found = true;
            cout << i << " ";
        }
    }
    if (!found) {
        cout << "NOT FOUND" << endl;
    } else {
        cout << endl;
    }
    return 0;
}
