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
  double sum = 1.0;
  ll currentSum = 1;
  for (ll i = 2; i <= n; i++) {
    currentSum += i;
    sum += 1.0 / currentSum;
  }
  cout << fixed << setprecision(6) << sum << endl;
  return 0;
}
