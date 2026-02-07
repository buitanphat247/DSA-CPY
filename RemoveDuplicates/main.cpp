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
  vector<ll> s(n);
  for (ll i = 0; i < n; i++)
    cin >> s[i];

  set<ll> seen;
  string result = "";
  for (int i = 0; i < n; i++) {
    if (seen.find(s[i]) == seen.end()) {
      seen.insert(s[i]);
      result += to_string(s[i]) + " ";
    }
  }
  cout << result << endl;
  return 0;
}
