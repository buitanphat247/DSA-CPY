#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

string toBinary(ll n) {
  if (n == 0)
    return "0";
  string result = "";
  while (n > 0) {
    result = char('0' + n % 2) + result;
    n /= 2;
  }
  return result;
}

string toOctal(ll n) {
  if (n == 0)
    return "0";
  string result = "";
  while (n > 0) {
    result = char('0' + n % 8) + result;
    n /= 8;
  }
  return result;
}

string toHex(ll n) {
  if (n == 0)
    return "0";
  string result = "";
  while (n > 0) {
    ll digit = n % 16;
    if (digit < 10)
      result = char('0' + digit) + result;
    else
      result = char('A' + digit - 10) + result;
    n /= 16;
  }
  return result;
}

int main() {
  READ("1");
  ll n;
  cin >> n;
  cout << toBinary(n) << endl;
  cout << toOctal(n) << endl;
  cout << toHex(n) << endl;
  return 0;
}
