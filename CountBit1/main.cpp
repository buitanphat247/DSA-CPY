#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

int bitcount(ll n) {
  int count = 0;
  while (n > 0) {
    if (n & 1) {
      count++;
    }
    n >>= 1;
  }
  return count;
}

int main() {
  READ("1");
  ll n;
  cin >> n;
  cout << bitcount(n) << endl;
  return 0;
}
