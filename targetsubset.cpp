#include<bits/stdc++.h>
using namespace std;
bool target(int *arr,int cap,int n)
{
  bool dp[n+1][cap+1];
  for(int i=0;i<=cap;i++)
   {
    dp[0][i]=false;
    dp[i][0]=false;
   }
  for (int i = 1; i <=n; ++i)
  { 
    for(int j=1;j<=cap;j++)
    {
        if(arr[i-1]>j)
            dp[i][j]=dp[i-1][j];
        else if(arr[i-1]==j)
            {
                dp[i][j]=true;
            }
        else
            dp[i][j]=(dp[i-1][j] or dp[i-1][j-arr[i-1]]);
    }
  }
return dp[n][cap];
    
}
int main()
{   
    int n,cap;
    cin>>n>>cap;
   // int *wt=new int[n];
    int *val=new int [n];
    for(int i=0;i<n;i++)
        cin>>val[i];
    

    if(target(val,cap,n))
        cout<<"YES";
    else 
        cout<<"NO";

}
