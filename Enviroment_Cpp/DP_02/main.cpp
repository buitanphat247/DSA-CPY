#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);
#define nmax 1e6 + 5

int main() {
  READ("1");
  ll n, m;
  cin >> n >> m;
  vector<ll> ny(n + 1), sf(n + 1);
  for (ll i = 1; i <= n; i++) {
    cin >> ny[i];
  }
  for (ll i = 1; i <= n; i++) {
    cin >> sf[i];
  }
  ll dpN = ny[1];
  ll dpS = sf[1];
  for (ll i = 2; i <= n; i++) {
    ll tempN = min(dpN, dpS + m) + ny[i];
    ll tempS = min(dpS, dpN + m) + sf[i];
    dpN = tempN;
    dpS = tempS;
  }
  cout << min(dpN, dpS) << endl;
  return 0;
}