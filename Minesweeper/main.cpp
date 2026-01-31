#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);
const ll nmax = 1e3;

const ll nmax = 1e3;
void create_matrix(vector<vector<ll>> &matrix, vector<vector<ll>> &dp,
                   const ll &n);
void handle_matrix(const vector<vector<ll>> &matrix, vector<vector<ll>> &dp,
                   const ll &n);
void show_matrix(const vector<vector<ll>> &a, ll n);

int main() {
  READ("1");
  ll n;
  cin >> n;
  vector<vector<ll>> arr(nmax, vector<ll>(nmax)), dp(nmax, vector<ll>(nmax));
  create_matrix(arr, dp, n);
  handle_matrix(arr, dp, n);
  show_matrix(dp, n);
  return 0;
}
void create_matrix(vector<vector<ll>> &matrix, vector<vector<ll>> &dp,
                   const ll &n) {
  for (ll i = 1; i <= n; i++) {
    for (ll j = 1; j <= n; j++) {
      cin >> matrix[i][j];
      if (i == 1)
        matrix[0][j] = 0, dp[0][j] = 0;
      if (i == n)
        matrix[n + 1][j] = 0, dp[n + 1][j] = 0;
      if (j == 1)
        matrix[i][0] = 0, dp[i][0] = 0;
      if (j == n)
        matrix[i][n + 1] = 0, dp[i][n + 1] = 0;
      dp[i][j] = 0;
    }
  }
}
void handle_matrix(const vector<vector<ll>> &matrix, vector<vector<ll>> &dp,
                   const ll &n) {
  for (ll i = 1; i <= n; i++) {
    for (ll j = 1; j <= n; j++) {
      if (matrix[i][j] == 1) {
        dp[i][j] = -1;
        if (matrix[i - 1][j - 1] != 1)
          dp[i - 1][j - 1]++;
        else
          dp[i - 1][j - 1] = -1;

        if (matrix[i - 1][j] != 1)
          dp[i - 1][j]++;
        else
          dp[i - 1][j] = -1;
        if (matrix[i - 1][j + 1] != 1)
          dp[i - 1][j + 1]++;
        else
          dp[i - 1][j + 1] = -1;
        if (matrix[i][j - 1] != 1)
          dp[i][j - 1]++;
        else
          dp[i][j - 1] = -1;
        if (matrix[i][j + 1] != 1)
          dp[i][j + 1]++;
        else
          dp[i][j + 1] = -1;
        if (matrix[i + 1][j - 1] != 1)
          dp[i + 1][j - 1]++;
        else
          dp[i + 1][j - 1] = -1;
        if (matrix[i + 1][j] != 1)
          dp[i + 1][j]++;
        else
          dp[i + 1][j] = -1;
        if (matrix[i + 1][j + 1] != 1)
          dp[i + 1][j + 1]++;
        else
          dp[i + 1][j + 1] = -1;
      }
    }
  }
}

void show_matrix(const vector<vector<ll>> &a, ll n) {
  for (ll i = 1; i <= n; i++) {
    for (ll j = 1; j <= n; j++) {
      cout << a[i][j];
      if (j < n)
        cout << " ";
    }
    cout << '\n';
  }
}
