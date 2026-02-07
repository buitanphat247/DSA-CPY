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
  vector<ll> dp(n);
  for (ll i = 0; i < n; i++) {
    cin >> dp[i];
  }
  ll max_ans = -1e9;
  ll sum = dp[0];
  for (ll i = 0; i < n; i++) {
    sum = max(sum + dp[i], dp[i]);
    max_ans = max(max_ans, sum);
  }
  cout << max_ans << endl;
}
