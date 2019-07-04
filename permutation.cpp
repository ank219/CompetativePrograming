#include<bits/stdc++.h>
using namespace std;
vector<string> vv;
void check(string s ,int l)
{
    int m=s.length()-1;
    if(l==m)
    {
        vv.push_back(s);
        return;
    }

    for(int i=0;i<=m;i++)
    {   swap(s[i],s[l]);
        check(s,l+1);
        swap(s[i],s[l]);
    }

}
int main()
{
    string s;
    cin>>s;
    check(s,0);
    sort(vv.begin(),vv.end());
    map<string,int>m;
    for(auto i:vv)
        m[i]++;
        int co=0;
    for(auto itr=m.begin();itr!=m.end();itr++)
          {  co++;
            cout<<itr->first<<" ";
          }

          cout<<endl<<co;

}
