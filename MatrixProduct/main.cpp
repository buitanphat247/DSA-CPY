#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

int main() {
  READ("1");
  ll n;
  cin >> n;

  vector<vector<ll>> A(n, vector<ll>(n));
  vector<vector<ll>> B(n, vector<ll>(n));
  vector<vector<ll>> C(n, vector<ll>(n, 0));

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      cin >> A[i][j];
    }
  }

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      cin >> B[i][j];
    }
  }

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      for (ll k = 0; k < n; k++) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  for (ll i = 0; i < n; i++) {
    for (ll j = 0; j < n; j++) {
      cout << C[i][j];
      if (j < n - 1)
        cout << " ";
    }
    cout << endl;
  }

  return 0;
}
