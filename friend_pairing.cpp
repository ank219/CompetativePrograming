#include <bits/stdc++.h>
using namespace std;
int dp[10005]={0};
int friends(int n)
 {

	if(n==0 or n==1 or n==2)
        return n;

    if(dp[n]>0)
         return dp[n];
    int a=friends(n-1);
    int b=(n-1)*friends(n-2);
    dp[n]=a+b;
	return a+b;
}

int main()
{
	int n;
	cin>>n;
	cout<<friends(n);
	return 0;
}
