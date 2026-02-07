#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int N;
  cin >> N;

  vector<long long> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  do {
    for (auto it : a)
      cout << it << " ";
    cout << endl;
  } while (next_permutation(a.begin(), a.end()));

  return 0;
}
