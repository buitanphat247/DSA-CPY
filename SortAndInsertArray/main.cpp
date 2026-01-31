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
  vector<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll x;
  cin >> x;
  sort(a.begin(), a.end(), greater<ll>());
  auto it = lower_bound(a.begin(), a.end(), x, greater<ll>());
  a.insert(it, x);
  for (auto it : a)
    cout << it << " ";

  return 0;
}
