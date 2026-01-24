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
  long double n, x;
  cin >> n >> x;
  long double result = 1.0;
  long double sum = 1.0;
  for (ll i = 1; i <= n; i++) {
    result = result * x / i;
    sum += result;
  }
  cout << fixed << setprecision(2) << sum << endl;
}
