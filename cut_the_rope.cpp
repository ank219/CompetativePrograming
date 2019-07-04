#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
	if(n==2 or n==3)
		 return n-1;
     int res=1;
    while(n>4)
    {
    	n-=3;
    	res*=3;

    }
    return (res*n);
}
int main()
{
  int n;
  cin>>n;
  cout<<check(n);

}