#include<bits/stdc++.h>
using namespace std;
int dp[1000]={0};

int checkTD(int n)
{
	//base
	if(n==1 or n==2 or n==3)
	  return n;
if(dp[n]!=0)
	  return dp[n];
	 int curr=0;

	 for (int i = 1; i < n; ++i)
	  {
	  	  curr=max(curr,checkTD(n-i)*i);
	  } 
    dp[n]=curr;
	return curr;
}
int checkBU(int n)
{
   int d_p[1000]={0};
   d_p[1]=1;
   d_p[2]=2;
   d_p[3]=3;
   d_p[4]=4;
   for(int i=5;i<=n;i++)
   {
   	for(int j=1;j<i;j++)
   	{
   		d_p[i]=max(d_p[i],d_p[j]*d_p[i-j]);
   	}
   }

   return d_p[n];
}
int main()
{
	int n;
	cin>>n;
	cout<<checkTD(n);
	cout<<endl;
	cout<<checkBU(n);
}