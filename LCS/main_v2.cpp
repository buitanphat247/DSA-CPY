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
  vector<ll> x(n);
  vector<ll> dp;
  for (ll i = 0; i < n; i++) {
    cin >> x[i];
    auto it = lower_bound(dp.begin(), dp.end(), x[i]);
    if (it == dp.end())
      dp.push_back(x[i]);
    else
      *it = x[i];
  }

  cout << dp.size() << endl;
}