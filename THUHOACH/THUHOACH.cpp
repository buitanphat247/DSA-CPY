#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name) freopen(name".inp","r",stdin);freopen(name".out","w",stdout);

const ll max_size_array=(ll)1e3;
ll knapsback(ll dp[max_size_array][max_size_array], ll n, ll S, ll w[]);

int main()
{
    READ("1");
    ll size_array,size_weight;
    cin>>size_array>>size_weight;
    ll weights[size_array+1];

    for(ll i=1;i<=size_array;i++)
        cin>>weights[i];
    ll dp[max_size_array][max_size_array];
    memset(dp,0,sizeof(dp));

    ll results = knapsback(dp,size_array,size_weight,weights);

    cout<<results<<endl;
}

ll knapsback(ll dp[max_size_array][max_size_array],ll n,ll S,ll w[])
{
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=S;j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=w[i])
                dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+w[i]);
        }
    }
    return dp[n][S];
}