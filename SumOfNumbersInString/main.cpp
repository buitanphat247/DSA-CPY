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
  string s;
  cin >> s;
  s += "d";
  ll results = 0;
  bool check = false;
  ll pos = 0;
  vector<string> results_string;
  for (ll i = 0; i < s.size(); i++) {
    if (check == false && s[i] - '0' <= 9) {
      check = true;
      pos = i;
    }
    if (check == true && s[i] - '0' > 9) {
      string num = s.substr(pos, i - pos);
      results_string.push_back(num);
      pos = i;
      check = false;
    }
  }

  ll answer = 0;
  for (auto it : results_string) {
    ll number = 0;
    for (auto item : it)
      number = number * 10 + item - '0';
    answer += number;
  }
  cout << answer << endl;
}
