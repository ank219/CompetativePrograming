#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<string> vv;
void checkS(ll n,ll m,ll in,string till)
{
    if(in>n)
      return;
    if(in==n)
      vv.push_back(till);
     for(int i=1;i<=m;i++)
         checkS(n,m,in+i,till+to_string(i));
}
int main()
{
    ll t,m;
    cin>>t>>m;
    checkS(t,m,0,"");
    ll n=vv.size();
    for(int i=0;i<n;i++)
      cout<<vv[i]<<" ";
    cout<<endl<<n;
    
    
}