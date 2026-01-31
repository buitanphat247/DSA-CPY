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
  set<ll> a;
  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;
    a.insert(x);
  }
  cout << a.size() << endl;
}