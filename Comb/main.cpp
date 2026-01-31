#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

ll factorial(ll n) {
  ll result = 1;
  for (ll i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

ll combination(ll n, ll k) {
  return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
  READ("1");
  ll n, k;
  cin >> n >> k;
  cout << combination(n, k) << endl;
  return 0;
}
