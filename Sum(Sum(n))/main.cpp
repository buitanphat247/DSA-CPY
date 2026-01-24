#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

string multip(string number_one, string number_two) {
  int len_number_one = number_one.length();
  int len_number_two = number_two.length();
  vector<int> results(len_number_one + len_number_two, 0);
  int sum = 0;
  for (ll i = len_number_one - 1; i >= 0; i--) {
    sum = 0;
    for (ll j = len_number_two - 1; j >= 0; j--) {
      int mul = (number_one[i] - '0') * (number_two[j] - '0');
      sum = mul + results[i + j + 1];
      results[i + j + 1] = sum % 10;
      results[i + j] += sum / 10;
    }
  }
  int i = 0;
  while (i < len_number_one + len_number_two - 1 && results[i] == 0)
    i++;
  string results_number = "";
  for (; i < len_number_one + len_number_two; i++)
    results_number += to_string(results[i]);
  return results_number;
}

string divString(string s, int d) {
  string res = "";
  ll cur = 0;
  for (ll i = 0; i < s.size(); i++) {
    cur = cur * 10 + (s[i] - '0');
    res.push_back(char(cur / d + '0'));
    cur %= d;
  }
  ll pos = 0;
  while (pos + 1 < res.size() && res[pos] == '0')
    pos++;
  return res.substr(pos);
}

int main() {
  READ("1");
  ll n;
  cin >> n;
  string sigma_math =
      multip(multip(to_string(n), to_string(n + 1)), to_string(n + 2));
  string results = divString(sigma_math, 6);
  cout << results << endl;
  ;
}
