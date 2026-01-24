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
  vector<ll> fibonacci(n + 1);
  fibonacci[0] = 0;
  fibonacci[1] = 1;
  for (ll i = 2; i <= n; i++) {
    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
  }
  cout << fibonacci[n] << endl;
  return 0;
}