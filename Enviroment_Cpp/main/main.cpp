#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define bl boolean
#define str string
#define READ(name) freopen(name".inp","r",stdin);freopen(name".out","w",stdout);

int main()
{
    READ("1");
    ll rows,cols,answer=(ll)-1e9;
    cin>>rows>>cols;
    vector<vector<ll>> dp(rows,vector<ll>(cols));
    vector<vector<ll>> results(rows,vector<ll>(cols));
    for(ll row=0;row<rows;row++)
    {
        for(ll col=0;col<cols;col++)
        {
            cin>>dp[row][col];

            results[row][col]=0;

            if(row==0&&col==0)
                results[row][col]=dp[row][col];

            if(col==0&&row!=0)
                results[row][col]=dp[row][col];
        }
    }

    for(ll col=1;col<cols;col++)
    {
        for(ll row=0;row<rows;row++)
        {
            if(row==0)
                results[row][col]=max(results[row][col-1],results[row+1][col-1]);
            if(row!=0&&row!=rows-1)
                results[row][col]=max({results[row][col-1],results[row+1][col-1],results[row-1][col-1]});
            if(row==rows-1)
                results[row][col]=max(results[row][col-1],results[row-1][col-1]);
            results[row][col]+=dp[row][col];

        }
    }

    for(ll row=0;row<rows;row++)
        answer=max(answer,results[row][cols-1]);
    cout<<answer<<endl;
}
