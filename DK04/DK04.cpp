#include<bits/stdc++.h>
using namespace std;

int main() {
    double a;
    cin >> a;
    int result = (a >= 0) ? (int)(a + 0.5) : (int)(a - 0.5);
    cout << result << endl;
    return 0;
}
