#include<bits/stdc++.h>
using namespace std;
vector<string> ss;
void perm(string str,string osf)
{
   if(str.size()==0)
      {ss.push_back(osf);
      return;
      }
    for(int i=0;i<str.size();i++)
    {
        char ch=str[i];
        string ros=str.substr(0,i)+str.substr(i+1);
        perm(ros,osf+ch);
    }
}
int main()
{
    string s;
    cin>>s;
    perm(s,"");
    for(auto i:ss)
        cout<<i<<" ";
}
