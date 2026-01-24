#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name) freopen(name".inp","r",stdin);freopen(name".out","w",stdout);
const ll MAX_SIZE = (ll)1e6;

vector<ll> prime;

void SANG_NT();

int main()
{
    READ("1");
    SANG_NT();
    map<ll,ll> dp;
    ll n;
    cin>>n;

    for(ll i=0;i<prime.size();i++)
    {
        while(n%prime[i]==0)
        {
            dp[prime[i]]++;
            n/=prime[i];
        }
        if(n==1)break;
    }
    if(n>1)dp[n]++;
    cout<<dp.size()<<endl;
    for(auto it:dp)
        cout<<it.first<<" "<<it.second<<endl;

}

void SANG_NT()
{
    ll limit = sqrt(MAX_SIZE);
    vector<bool> is_prime(limit + 1, true);

    is_prime[0] = is_prime[1] = false;

    for (ll i = 2; i * i <= limit; i++)
        if (is_prime[i])
            for (ll j = i * i; j <= limit; j += i)
                is_prime[j] = false;

    for (ll i = 2; i <= limit; i++)
        if (is_prime[i])
            prime.push_back(i);
}
