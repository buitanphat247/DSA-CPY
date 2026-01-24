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
  READ("1")
  ll n, S;
  cin >> n >> S;
  vector<ll> w(n + 10, 0), v(n + 10, 0);
  for (ll i = 1; i <= n; i++)
    cin >> w[i] >> v[i];

  vector<vector<ll>> dp(n + 10, vector<ll>(S + 10, 0));
  for (ll i = 1; i <= n; i++) {
    for (ll j = 1; j <= S; j++) {
      dp[i][j] = dp[i - 1][j];
      if (j >= w[i])
        dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
    }
  }

  cout << dp[n][S] << endl;
}
