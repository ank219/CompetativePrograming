#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    return (a>b)?a:b;
}

int knapsack01(int *wt,int *val,int n,int cap)
{
    int dp[n+1][cap+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=cap;j++)
        {
            if(i==0 or j==0)
                dp[i][j]=0;
            else if(wt[i-1]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]],  dp[i-1][j]);
            }
        }
    }
    return dp[n][cap];
}

int main()
{
    int n,cap;
    cin>>n>>cap;
    int *wt=new int[n];
    int *val=new int[n];
    for(int i=0;i<n;i++)
        cin>>wt[i];
    for(int i=0;i<n;i++)
        cin>>val[i];
    cout<<knapsack01(wt,val,n,cap);
    return 0;
}