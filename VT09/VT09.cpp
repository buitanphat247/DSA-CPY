#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;
bool dp_array[MAXN + 10];

void sang_snt() {
    dp_array[0] = dp_array[1] = false;
    for (int index_i = 2; index_i <= sqrt(MAXN); index_i++) {
        if (dp_array[index_i]) {
            for (int index_j = index_i * index_i; index_j <= MAXN; index_j += index_i) {
                dp_array[index_j] = false;
            }
        }
    }
}

int main() {
    fill(dp_array, dp_array + MAXN + 10, true);
    sang_snt();
    int number_n;
    cin >> number_n;
    set<int> number_set;
    for (int i = 0; i < number_n; i++) {
        int x;
        cin >> x;
        number_set.insert(abs(x));
    }
    vector<int> number_array(number_set.begin(), number_set.end());
    sort(number_array.begin(), number_array.end());
    for (int item : number_array) {
        if (dp_array[item]) {
            cout << item << " ";
        }
    }
    cout << endl;
    return 0;
}
