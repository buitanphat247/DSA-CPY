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
  vector<ll> dp(n + 1);
  ll count = 0;
  for (ll i = 1; i <= n; i++) {
    cin >> dp[i];
    (dp[i] <= k) ? count++ : count = 0;
  }
  vector<ll> sliding_window(n + 1, 0);
  sliding_window[1] = dp[1];
  for (ll i = 2; i <= n; i++)
    sliding_window[i] = sliding_window[i - 1] + dp[i];

  ll left = 1, sum = 0, answer = 0;
  for (ll right = 1; right <= n; right++) {
    sum = sliding_window[right] - sliding_window[left - 1];
    while (sum > k) {
      left++;
      sum = sliding_window[right] - sliding_window[left - 1];
      if (sum <= k)
        break;
    }
    answer += (right - left + 1);
  }
  cout << answer << endl;
}
