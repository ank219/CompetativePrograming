#include <bits/stdc++.h>
using namespace std;
int dp[1000][1000];
int editDistanceDP(string s1,string s2)
{
  if(s1.size()==0 or s2.size()==0)
        return (int)abs(s1.size()-s2.size());
   if(dp[s1.size()][s2.size()]!=0)
   	  return dp[s1.size()][s2.size()];
	int result;
    if(s1[0]==s2[0])
    	 result=editDistance(s1.substr(1),s2.substr(1));
     else
     {
     	int call1=1+editDistance(s1.substr(1),s2.substr(1));
     	int call2=1+editDistance(s1,s2.substr(1));
     	int call3=1+editDistance(s1.substr(1),s2);
        result=min(call1,min(call2,call3));
     }
     dp[s1.size()][s2.size()]=result;
     return result;

}
int editDistance(string s1,string s2)
{
	if(s1.size()==0 or s2.size()==0)
        return (int)abs(s1.size()-s2.size());
	int result;
    if(s1[0]==s2[0])
    	 result=editDistance(s1.substr(1),s2.substr(1));
     else
     {
     	int call1=1+editDistance(s1.substr(1),s2.substr(1));
     	int call2=1+editDistance(s1,s2.substr(1));
     	int call3=1+editDistance(s1.substr(1),s2);
        result=min(call1,min(call2,call3));
     }
     return result;

}

int main(int argc, char const *argv[])
{
	 string s1,s2;
	 cin>>s1>>s2;
	cout<<editDistance(s1,s2);
		return 0;
}