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
  vector<ll> a(n), b(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (ll i = 0; i < n; i++) {
    cin >> b[i];
  }
  vector<ll> c(2 * n);
  for (ll i = 0; i < n; i++) {
    c[2 * i] = a[i];
    c[2 * i + 1] = b[i];
  }
  for (ll i = 0; i < 2 * n; i++) {
    cout << c[i];
    if (i < 2 * n - 1)
      cout << " ";
  }
  cout << endl;
  return 0;
}
