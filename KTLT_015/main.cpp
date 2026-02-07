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
  vector<ll> arr(n);
  vector<ll> ans;
  for (ll i = 0; i < n; i++) {
    cin >> arr[i];
  }

  for (ll i = 0; i < n; i++) {
    auto it = lower_bound(ans.begin(), ans.end(), arr[i]);
    if (it != ans.end()) {
      *it = arr[i];
    } else {
      ans.pb(arr[i]);
    }
  }
  cout << ans.size() << endl;
}
