#include<bits/stdc++.h>
using namespace std;
long long sto(string a)
{

  long long c,n=0;

  for (c =0; c<a.length(); c++)
  {
    n = n * 10 + a[c] - '0';
  }


  return n;
}
void check(string s ,string osf,char *alpha)ewesasw3wawe3wq
{
   if(s.size()==0)
   {
     cout<<osf<<endl;
       return;
   }
  long long first=s[0]-'0';
   long long  second=0;
   if(s.size()>=2)
   {
       second=sto(s.substr(0,2));
       check(s.substr(1),osf+alpha[first],alpha);
       if(second<=26)
       check(s.substr(2),osf+alpha[second],alpha);

   }
   else
   check(s.substr(1),osf+alpha[first],alpha);
}
int main()
{

  string s;
  cin>>s;
  char alpha[27]={'#','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  check(s,"",alpha);

}


