#include<bits/stdc++.h>
using namespace std;
vector<string> ans;
void check(int index,int n,string s)
{
    if(n==0 && index==0)
    {

        ans.push_back(s);
        return;
    }
    if(index>0)
        check(index-1,n,s+")");
    if(n>0)
         check(index+1,n-1,s+"(");

}
int main()
{

    int n;
    cin>>n;
    check(0,n,"");
    for(int i=0;i<ans.size();i++)
         cout<<ans[i]<<endl;
}
