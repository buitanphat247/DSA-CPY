#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int count_loop = 0; count_loop < n; count_loop++) {
        string str_number;
        cin >> str_number;
        int result = 0;
        for (char item : str_number) {
            result += item - '0';
        }
        cout << result << endl;
    }
    return 0;
}
