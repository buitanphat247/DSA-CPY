#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);
const long long nmax = 1e4;
void create_matrix(vector<ll> &matrix);
void handle_result(const vector<ll> &matrix, const ll &k);
int main() {
  READ("1");
  ll n, k;
  cin >> n >> k;
  vector<ll> dp(n);
  create_matrix(dp);
  handle_result(dp, k);
  return 0;
}

void create_matrix(vector<ll> &matrix) {
  for (ll i = 0; i < matrix.size(); i++)
    cin >> matrix[i];
}

void handle_result(const vector<ll> &matrix, const ll &k) {
  auto it = lower_bound(matrix.begin(), matrix.end(), k);
  if (it != matrix.end() && *it == k) {
    cout << (it - matrix.begin()) << endl;
  } else {
    cout << -1 << endl;
  }
}
