#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int index_loop = 0; index_loop < n; index_loop++) {
        string str_space;
        getline(cin, str_space);
        bool check = false;
        int count = 0;
        for (int i = 0; i < str_space.length(); i++) {
            if (str_space[i] != ' ') {
                check = false;
                continue;
            } else {
                if (!check) {
                    check = true;
                    count++;
                    continue;
                } else {
                    continue;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
