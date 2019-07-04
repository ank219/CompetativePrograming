#include<bits/stdc++.h>
using namespace std;

int knap0N(int *weight,int *value,int n, int total)
{
    int **dp=new int*[total+1];

    for(int i=0;i<total+1;i++)
    	{
            dp[i]=new int[n+1];
        }
    for(int i=0;i<=total;i++)
    	{
            for(int j=0;j<=n;j++)
    		{
                dp[i][j]=0;
            }
        }
    for(int i=1;i<=total;i++)
	{
        for(int j=1;j<=n;j++)
		{
            if(i>=weight[j-1])
              {
                dp[i][j] =dp[i-weight[j-1]][j]+value[j-1];
              }
            dp[i][j] = max(dp[i][j-1],dp[i][j]);
	    }
	}
	int kk=dp[total][n];
    return kk;
}

int main()
{
    int n,total;
    cin>>n>>total;
    int *weight=new int[n];
    int *value=new int[n];
    for(int i=0;i<n;i++)
        cin>>weight[i];
    for(int i=0;i<n;i++)
		cin>>value[i];
	cout<<knap0N(weight,value,n,total);
	return 0;
}