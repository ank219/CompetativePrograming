#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int sum(int arr[],int i,int j)
{
	int result=0;
	for(int k=i;k<=j;k++)
		result=((result%100)+(arr[k]%100))%100;
	return result;
}
long long  mixtures(int arr[],int i,int j)
{
     if(i==j) return 0;
	if(abs((int)(i-j))==1)
		return arr[i]*arr[j];
	if(dp[i][j]!=-1) return dp[i][j];  
     long long result=INT_MAX;
		for(int k=i+1;k<=j;k++)
		{
           long long  retval=mixtures(arr,i,k-1)+mixtures(arr,k,j) +(sum(arr,i,k-1)*sum(arr,k,j));
           if(retval<result)
           	   result=retval;

		}
  dp[i][j]=result;
  return result;
}
int main()
{   int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		 cin>>arr[i];
	for(int i=0;i<1000;i++)
	{
		for(int j=0;j<1000;j++)
			dp[i][j]=-1;
	}
    cout<<mixtures(arr,0,n-1)<<endl; 
  }  
}