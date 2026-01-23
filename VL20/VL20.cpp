#include<bits/stdc++.h>
using namespace std;

int main() {
    char char_one, char_two;
    cin >> char_one >> char_two;
    for (int i = char_one; i <= char_two; i++) {
        cout << (char)toupper(i) << " ";
    }
    cout << endl;
    return 0;
}
