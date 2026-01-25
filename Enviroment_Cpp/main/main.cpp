#include<bits/stdc++.h>
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
  ll n;
  cin >> n;
  ll dp[n+1],x[n+1];
  for(ll i=0;i<n;i++)
      cin>>x[i];
  memset(dp,0,sizeof(dp));
  dp[0]=1;
  for(ll i=1;i<n;i++)
  {
      for(ll j=0;j<i;j++)
      {
          if(x[i]>x[j])
            dp[i]=max(dp[i],dp[j]+1);
      }
  }
  for(auto it:dp)
    cout<<it<<" ";
}
