#include<bits/stdc++.h>
using namespace std;

string so_chinh_phuong(int number) {
    if (number < 0) return "NO";
    int number_sqrt = (int)sqrt(number);
    if (pow(number_sqrt, 2) == number) {
        return "YES";
    }
    return "NO";
}

int main() {
    int n;
    cin >> n;
    cout << so_chinh_phuong(n) << endl;
    return 0;
}
