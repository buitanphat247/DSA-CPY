#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);
const ll MODULO = (ll)1e9 + 7;
const ll MAX_SIZE = (ll)1e7;
int main() {
  READ("1");
  ll n;
  cin >> n;
  ll dp[MAX_SIZE];
  dp[0] = dp[1] = 1;
  for (ll i = 2; i <= n; i++) {
    for (ll j = 1; j <= 6; j++) {
      if (i - j >= 0)
        dp[i] = ((dp[i] % MODULO) + (dp[i - j] % MODULO)) % MODULO;
      else
        break;
    }
  }
  cout << dp[n] << endl;
}
