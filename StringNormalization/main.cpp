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
  string s;
  getline(cin, s);
  string results = "";
  bool check = false;
  for (ll i = 0; i < s.size(); i++) {
    if (s[i] != ' ') {
      check = true;
      results += s[i];
    }
    if (s[i] == ' ' && check == true) {
      check = false;
      results += ' ';
    }
  }
  if (results[0] >= 'a' && results[0] <= 'z')
    results[0] = toupper(results[0]);

  cout << results;
  return 0;
}
