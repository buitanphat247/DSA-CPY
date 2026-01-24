#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name)                                                             \
  freopen(name ".inp", "r", stdin);                                            \
  freopen(name ".out", "w", stdout);

const int MAXN = 1000000;
ld prefix_sum[MAXN + 1];

void precompute() {
  prefix_sum[0] = 0.0;
  for (int i = 1; i <= MAXN; i++) {
    prefix_sum[i] = prefix_sum[i - 1] + 1.0 / (2 * i - 1);
  }
}

int main() {
  READ("1");
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  precompute();
  
  int T;
  cin >> T;
  
  while (T--) {
    int n;
    cin >> n;
    cout << fixed << setprecision(5) << prefix_sum[n] << "\n";
  }
  
  return 0;
}
