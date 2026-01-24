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
  vector<ll> dp(n + 1);
  dp[0] = 0;
  dp[1] = 1;
  const ll MOD = 1000000007;
  for (ll i = 2; i <= n; i++)
    dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
  cout << dp[n] << endl;
  return 0;
}