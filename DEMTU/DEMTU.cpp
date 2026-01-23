#include<bits/stdc++.h>
using namespace std;

int main() {
    string str_input;
    getline(cin, str_input);
    bool check = false;
    int count = 0;
    for (int char_idx = 0; char_idx < str_input.length(); char_idx++) {
        if (str_input[char_idx] != ' ') {
            if (check) {
                continue;
            } else {
                count++;
                check = true;
            }
        } else {
            check = false;
        }
    }
    cout << count << endl;
    return 0;
}
