#include <bits/stdc++.h>
using namespace std;
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);
#define ll long double
struct sub_node {
  ll value;
  ll i, j;
  bool is_valid = false;
};

void create_matrix(ll n, ll m, vector<vector<ll>> &a);
void show_matrix(ll n, ll m, vector<vector<ll>> &a);
void handle(ll n, ll m, vector<vector<ll>> &a, sub_node &s);
void show_sub_node(sub_node &s);
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  READ("1");
  ll n, m;
  cin >> n >> m;
  vector<vector<ll>> v(n + 2, vector<ll>(m + 2, (ll)-1e18));
  sub_node s;
  create_matrix(n, m, v);
  handle(n, m, v, s);
  show_sub_node(s);
  return 0;
}

void create_matrix(ll n, ll m, vector<vector<ll>> &a) {
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> a[i][j];
    }
  }
}
void handle(ll n, ll m, vector<vector<ll>> &a, sub_node &s) {
  s.value = (ll)1e18;
  s.i = (ll)1e18;
  s.j = (ll)1e18;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      ll top = a[i - 1][j];
      ll bottom = a[i + 1][j];
      ll left = a[i][j - 1];
      ll right = a[i][j + 1];
      if (a[i][j] > top && a[i][j] > bottom && a[i][j] > left &&
          a[i][j] > right) {
        if (a[i][j] < s.value) {
          s.value = a[i][j];
          s.i = i - 1;
          s.j = j - 1;
          s.is_valid = true;
        }
      }
    }
  }
}

void show_sub_node(sub_node &s) {
  if (s.is_valid == true) {
    cout << s.i << " " << s.j << endl;
  } else {
    cout << "-1" << endl;
  }
}
