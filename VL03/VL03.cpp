#include<bits/stdc++.h>
using namespace std;

int main() {
    int number_a;
    cin >> number_a;
    int result = 0;
    for (int item = 2; item <= number_a; item++) {
        result += item;
    }
    cout << result + number_a * 2 << endl;
    return 0;
}
