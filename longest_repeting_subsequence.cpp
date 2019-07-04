#include<bits/stdc++.h>
using namespace std;

void lrs(string str)
{   int n=str.size();
    int **dp=new int *[n+1];
    for(int i=0;i<n+1;i++)
    	 dp[i]=new int[n+1];
    for(int i=0;i<n+1;i++)
    {
        dp[0][i]=0;
        dp[i][0]=0;
    }
    for(int i=1;i<n+1;i++)
    {
          for(int j=1;j<n+1;j++)
          {

          	if(str[i-1]==str[j-1] and i!=j)
          	{

               dp[i][j]=1+dp[i-1][j];
          	}
          	else
          		dp[i][j]=max(dp[i-1][j],max(dp[i-1][j],dp[i][j-1]));
          }

    }
     cout<<dp[n][n]<<endl;
}

int main()
{ string s;
  cin>>s;
  lrs(s);

}
