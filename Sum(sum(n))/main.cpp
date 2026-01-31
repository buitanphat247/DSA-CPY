#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);
const long long nmax = 1e7;
int main() {
  READ("1");
  ll n;
  cin >> n;
  ll dp[nmax];
  ll temp[nmax];
  dp[0] = 0;
  temp[0] = 0;
  for (ll i = 1; i < nmax; i++) {
    dp[i] = i + dp[i - 1];
    temp[i] = temp[i - 1] + dp[i];
  }
  cout << temp[n] << endl;
}
