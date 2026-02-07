#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nmax 1e6 + 5
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

int main() {
  READ("1");
  ll n;
  cin >> n;
  ll number_nine = n / 9;
  ll temp = n % 9;
  if (temp != 0)
    cout << temp;
  while (number_nine--)
    cout << 9;

  return 0;
}
