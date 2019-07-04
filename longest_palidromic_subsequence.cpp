#include<bits/stdc++.h>
using namespace std;

void lps(string str,int n)
{   
    
    int **dp=new int *[n];
    for(int i=0;i<n;i++)
        dp[i]=new int[n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
          dp[i][j]=0;
    }
    for(int i=0;i<n;i++)
       dp[i][i]=1;
     int len=2;
    while(len<=n)
    {   int i=0;
          while(i<=n-len)
          {
               int j=i+len-1;
          	if(str[i]==str[j] and  len==2)
          	{

               dp[i][j]=2;
          	}
            else if(str[i]==str[j])
                 {
                  dp[i][j]=2+dp[i+1][j-1];
                 }
          	else
          		dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
            i++;
          }
      len++;
    }
     cout<<dp[0][n-1]<<endl;
}

int main()
{ string s;
  cin>>s;
  int n=s.size();
  lps(s,n);

}
