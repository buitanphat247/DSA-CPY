#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);
const ll MAX = 30;
ll n, k, dp[MAX], ans = 0;
void solve_backtrack(ll index, ll sum, ll choose) {
  if (index > n) {
    if (choose > 0 && sum == k)
      ans++;
    return;
  }
  solve_backtrack(index + 1, sum + dp[index], choose + 1);
  solve_backtrack(index + 1, sum, choose);
}

int main() {
  READ("1");
  cin >> n >> k;
  for (ll i = 1; i <= n; i++)
    cin >> dp[i];
  solve_backtrack(1, 0, 0);
  cout << ans << endl;
}