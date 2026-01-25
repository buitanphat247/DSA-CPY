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
  ll n;
  cin >> n;
  vector<ll> l(n + 10, 0);
  vector<ll> h(n + 10, 0);
  for (ll i = 1; i <= n; i++)
    cin >> l[i];
  for (ll i = 1; i <= n; i++)
    cin >> h[i];
  vector<vector<ll>> dp(n + 10, vector<ll>(3, 0));
  dp[1][0] = 0;
  dp[1][1] = l[1];
  dp[1][2] = 0;

  for (ll i = 2; i <= n; i++) {
    dp[i][0] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
    dp[i][1] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]}) + l[i];
    dp[i][2] = dp[i - 1][0] + h[i];
  }

  cout << max({dp[n][0], dp[n][1], dp[n][2]}) << endl;
}
