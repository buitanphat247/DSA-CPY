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
  ll n, s;
  cin >> n >> s;
  vector<ll> dp(n + 1, 0);
  for (ll i = 1; i <= n; i++) {
    ll temp;
    cin >> temp;
    (i == 1) ? dp[i] = temp : dp[i] = dp[i - 1] + temp;
  }
  ll left = 1, maxLen = 0;
  for (ll right = 1; right <= n; right++) {
    while (left <= right && dp[right] - dp[left - 1] > s) {
      left++;
    }
    if (left <= right && dp[right] - dp[left - 1] <= s) {
      maxLen = max(maxLen, right - left + 1);
    }
  }
  cout << maxLen << endl;
}
