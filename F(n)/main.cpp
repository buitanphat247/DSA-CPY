#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

const ll nmax = 1e7 + 7;
int main() {
  READ("1");
  ll n;
  cin >> n;
  vector<ll> dp(nmax, 0);
  dp[0] = 1;
  dp[1] = 1;
  for (ll i = 2; i <= n; i++) {
    if (i % 2 == 0) {
      dp[i] = dp[i / 2];
    } else {
      dp[i] = dp[i / 2] + dp[i / 2 + 1];
    }
  }
  cout << dp[n] << endl;
  return 0;
}
