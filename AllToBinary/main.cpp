#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

string toBinary(ll n) {
  if (n == 0)
    return "0";
  string binary = "";
  while (n > 0) {
    binary = to_string(n % 2) + binary;
    n /= 2;
  }
  return binary;
}

int main() {
  READ("1");
  ll n;
  cin >> n;
  for (ll i = 1; i <= n; i++) {
    cout << toBinary(i) << endl;
  }
  return 0;
}
