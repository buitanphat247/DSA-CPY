#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);
const ll MAX = 30;
ll n;
vector<string> ans;
void solve_backtrack(ll index, string s) {
  if (index == n) {
    ans.push_back(s);
    cout << s << endl;
    return;
  }
  solve_backtrack(index + 1, s + "0");
  solve_backtrack(index + 1, s + "1");
}
int main() {
  READ("1");
  cin >> n;
  solve_backtrack(0, "");
}
