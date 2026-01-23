#include<bits/stdc++.h>
using namespace std;

int main() {
    int number_n;
    cin >> number_n;
    vector<int> number_array(number_n);
    for (int i = 0; i < number_n; i++) {
        cin >> number_array[i];
    }
    int s_solve = 0, count = 0;
    for (int item : number_array) {
        if (item % 2 != 0) {
            s_solve += item;
            count++;
        }
    }
    cout << fixed << setprecision(4) << (double)s_solve / count << endl;
    return 0;
}
