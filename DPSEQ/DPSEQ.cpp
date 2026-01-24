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
  ll n, k;
  cin >> n >> k;
  ll a[n], dp[n];
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    dp[i] = -1000000;
  }
  dp[0] = a[0];
  dp[1] = max(a[1], dp[0] + a[1]);
  for (ll i = 2; i < n; i++) {
    ll back_step = 0;
    if (i - k < 0)
      back_step = 0;
    else
      back_step = i - k;
    for (ll j = i - 1; j >= back_step; j--)
      dp[i] = max(dp[j] + a[i], dp[i]);
  }
  cout << dp[n - 1] << endl;
}
