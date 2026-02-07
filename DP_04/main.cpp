#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

int main() {
  ll n;
  cin >> n;
  vector<ll> arr(n);
  vector<ll> ans;
  for (ll i = 0; i < n; i++) {
    cin >> arr[i];
  }

  ll minPrice = LLONG_MAX;
  ll maxProfit = 0;

  for (ll i = 0; i < n; i++) {
    minPrice = min(minPrice, arr[i]);
    maxProfit = max(maxProfit, arr[i] - minPrice);
  }

  cout << maxProfit << endl;
}
