#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);
const long long nmax = 15;
int main() {
  READ("1");
  ll n;
  cin >> n;
  ll dp[nmax];
  ll temp[nmax];
  dp[0] = 0;
  temp[0] = 0;
  dp[1] = 1;
  temp[1] = 1;
  for (ll i = 2; i < nmax; i++) {
    dp[i] = i * dp[i - 1];
    temp[i] = temp[i - 1] + dp[i];
  }
  cout << temp[n];
  return 0;
}
