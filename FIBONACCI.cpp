#include <bits/stdc++.h>
using namespace std;
int dp[10005]={0};
int fib(int n)
 {

	if(n==0 or n==1 )
        return n;

    if(dp[n]>0)
         return dp[n];
    int a=fib(n-1);
    int b=fib(n-2);
    dp[n]=a+b;
	return a+b;
}

int main()
{
	int n;
	cin>>n;
	cout<<fib(n);
	return 0;
}

