#include<bits/stdc++.h>
using namespace std;

int main() {
    string str_number;
    getline(cin, str_number);
    int number_a, number_b;
    sscanf(str_number.c_str(), "%d %d", &number_a, &number_b);
    cout << number_a << " + " << number_b << " = " << number_a + number_b << endl;
    return 0;
}
