#include<bits/stdc++.h>
using namespace std;
void check(string s,string osf)
{
    if(s.size()==0)
      {
          cout<<osf<<endl;
          return;
      }
      char ch=s[0];
    if(s.size()>=2 and s[1]==ch)
            check(s.substr(2),osf+ch+"*"+ch);
         else
            check(s.substr(1),osf+ch);

}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
       check(s,"");
    }
}
s
