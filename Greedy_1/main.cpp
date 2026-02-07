#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

void create_matrix(vector<ll> &dp, ll n);
void solve(vector<ll> &dp, ll n, ll l, ll c);
int main() {
  READ("1");
  ll n, l, c;
  cin >> n >> l >> c;
  vector<ll> dp(n);
  create_matrix(dp, n);
  solve(dp, n, l, c);
}

void create_matrix(vector<ll> &dp, ll n) {
  for (ll i = 0; i < n; i++) {
    cin >> dp[i];
  }
}

void solve(vector<ll> &dp, ll n, ll l, ll c) {
  ll res = 0;
  ll i, j;
  i = 0;
  j = 0;
  while (i < n) {
    while (j + 1 < n && dp[j + 1] - dp[i] <= c) {
      j++;
    }
    if (j == i)
      break;
    if (j < n - 1)
      res++;
    i = j;
  }
  cout << res << endl;
}
