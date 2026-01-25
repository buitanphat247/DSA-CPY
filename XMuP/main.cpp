#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

string multiple(string number1, string number2) {
  if (number1.length() < number2.length())
    swap(number1, number2);

  ll n = number1.length();
  ll m = number2.length();
  ll sum = 0;
  vector<ll> results(n + m, 0);
  for (ll i = n - 1; i >= 0; i--) {
    sum = 0;
    for (ll j = m - 1; j >= 0; j--) {
      int mul = (number1[i] - '0') * (number2[j] - '0');
      sum = mul + results[i + j + 1];
      results[i + j + 1] = sum % 10;
      results[i + j] += sum / 10;
    }
  }
  ll pos = 0;
  while (pos < n + m && results[pos] == 0)
    pos++;
  string ans = "";
  for (; pos < n + m; pos++)
    ans += to_string(results[pos]);
  return ans;
}

int main() {
  READ("1");
  ll n, m;
  cin >> n >> m;
  string s_n = to_string(n), ans_solve = to_string(1);
  while (m > 0) {
    ans_solve = multiple(s_n, ans_solve);
    m--;
  }
  cout << ans_solve << endl;
}
