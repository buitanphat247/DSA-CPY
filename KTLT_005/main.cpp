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
  ll n, m, k;
  cin >> n >> m >> k;
  vector<ll> a(n);
  vector<ll> b(m);
  for (ll i = 0; i < n; i++)
    cin >> a[i];
  for (ll j = 0; j < m; j++)
    cin >> b[j];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  ll j = 0, cnt = 0;
  for (ll i = 0; i < n; i++) {
    while (j < m && b[j] < a[i] - k)
      j++;
    if (j < m && b[j] <= a[i] + k) {
      cnt += 1;
      j++;
    }
  }
  cout << cnt << endl;
}
