#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

int main() {
  READ("1");
  ll m, n;
  cin >> m >> n;
  vector<vector<ll>> arr(m, vector<ll>(n));
  for (ll i = 0; i < m; i++) {
    for (ll j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  for (ll i = 0; i < m; i++) {
    for (ll j = 0; j < n; j++) {
      cout << arr[i][j];
      if (j < n - 1)
        cout << " ";
    }
    cout << endl;
  }
  return 0;
}
