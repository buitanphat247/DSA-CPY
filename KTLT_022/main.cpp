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
  ll n, k;
  cin >> n >> k;
  vector<ll> dp(n + 5, 0);
  for (ll i = 1; i <= n; i++) {
    ll temp;
    cin >> temp;
    (i == 1) ? dp[i] = temp : dp[i] = dp[i - 1] + temp;
  }
  ll left = 1, min_len = 1e9, check_solve = false;
  for(ll right=1;right<=n;right++)
  {
      ll num = dp[right]-dp[left-1];
      while(left<=right&&num>=k)
      {
          min_len=min(min_len,right-left+1),check_solve=true;
          left++;
          num=dp[right]-dp[left-1];
      }
  }
 (check_solve==true)?cout<<min_len:cout<<"-1";
 
}
