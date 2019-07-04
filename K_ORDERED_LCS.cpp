#include <bits/stdc++.h>
using namespace std;
int dp[2005][2005][8];
 int nOrder_lcs(int  s1[],int n,int s2,int m,int k,int i,int j)
 {
     if(i==n or j==m)
     	return 0;
     if(dp[i][j][k]!=-1)
     	  return dp[i][j][k];
     int ans;
     if(s1[i]==s2[j])
     {	ans=1+nOrder_lcs(s1,n,s2,m,k,i+1,j+1);
        dp[i][j][k]=ans;
        return ans;
    }
    else
    {
    	int call1=nOrder_lcs(s1,n,s2,m,k,i+1,j);
    	int call2=nOrder_lcs(s1,n,s2,m,k,i,j+1);
    	int call3=-1;
    	if(k>0)
    	{
    		call3=nOrder_lcs(s1,n,s2,m,k-1,i+1,j+1);
    	}    	
    	ans=max(call1,max(call2,call3));
    	dp[i][j][k]=ans;
    	return ans;
    }


 }
int main(int argc, char const *argv[])
{
	int n,m,k;
	cin>>n>>m>>k;
	int s1[n],s2[m];
	for(int i=0;i<n;i++)
		 cin>>s1[i];
	for(int i=0;i<m;i++)
		  cin>>s2[i];



	nOrder_lcs(s1,n,s2,m,s3);
	return 0;
}