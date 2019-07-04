#include <iostream>
using namespace std;
int dp[1000][1000];
int lcs(string s1, string s2)
 { 
  int n=s1,size(), m=s2.size();
	if(n == 0 or m==0) 
		return 0;

	if(dp[n][m]!=-1) 
		return dp[n][m];
	
	int val;
	
	if(s1[0] == s2[0]) 
		val = lcs(s1.substr(1), s2.substr(1))+1;
	else 
		val = max(lcs(s1.substr(1), s2),lcs(s1, s2.substr(1)));
	
	dp[n][m] = val;
	
	return val;
}

int main()
{
	string s1, s2;
	cin>>s1>>s2;
	memset(dp,-1,sizeof(dp));
	cout<<lcs(s1, s2);
	
	return 0;
}