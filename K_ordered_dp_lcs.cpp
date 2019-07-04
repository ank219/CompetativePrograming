#include <iostream>
using namespace std;

int dp[2500][2500][8];

int checkLCS( int *a, int *b,int n, int m, int k, int i, int j) {
	if(i == n or j == m)
	 {
		return 0;
	}
	if(dp[i][j][k] != -1) 
      {
      	return dp[i][j][k];
      }

	int val;
	if(a[i] != b[j]) 
	{
		int Z= -1;
		int X= checkLCS( a,b,n, m, k, i+1, j);
		int Y = checkLCS( a,b,n, m, k, i, j+1);
		if(k>0) 
		{
			Z= checkLCS(a,b,n, m, k-1, i+1, j+1)+1;
		}
		val = max(X, max(Y,Z));
		dp[i][j][k] =val;

		return dp[i][j][k];
	} 
	else 
	{
		val = checkLCS(a, b,n,m, k, i+1, j+1)+1;
		dp[i][j][k] = val;
		return dp[i][j][k];

	}
}
void go(int n,int m,int k)
{
	int *a = new int[n];
	int *b = new int[m];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	 {
		cin>>b[i];
	}
	for(int i=0;i<2500;i++) 
	{
		for(int j=0;j<2500;j++) 
		{
			for(int k=0;k<8;k++)
			 {
				dp[i][j][k]=-1;
			}
		}
	}
	cout<<checkLCS(a,b,n,m,k,0,0);
}
int main()
{
	int n, m, k;
	cin>>n>>m>>k;
	go(n,m,k);
	
	return 0;
}