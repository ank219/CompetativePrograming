#include<bits/stdc++.h>
using namespace std;
int print_square_size(int **mat,int **dp,int n,int m)
{

    for(int i=0;i<m;i++)
      dp[0][i]=mat[0][i];
    for(int i=0;i<n;i++)
      dp[i][0]=mat[i][0];

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==0)
               dp[i][j]=0;
            else
              dp[i][j]=1+ min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]));
        }
    }

    int counter=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(dp[i][j]>counter)
            counter=dp[i][j];
        }
    }
    return counter;
}
int main()
{  int n,m;
  cin>>n>>m;
    int **mat=new int *[n];
     int **dp=new int *[n];
    for(int i=0;i<n;i++)
      { mat[i]=new int [m];
         dp[i]=new int [m];
      }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
          {cin>>mat[i][j];
            dp[i][j]=0;
          }

    }

    cout<<print_square_size(mat,dp,n,m)<<endl;
}
