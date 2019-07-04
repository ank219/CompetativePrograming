#include<bits/stdc++.h>
using namespace std;
unordered_map<string,bool> mp;
bool checkbreak(string str)
{ 
	if(str.size()==0)
			return true;
		
	for(int i=0;i<=str.size();i++)
	{
       string pre=str.substr(0,i);
       if(mp.find(pre)!=mp.end() and checkbreak(str.substr(i)))
       	   return true;
	}

	return false;

}
bool word_break_print(string str,string osf)
{ 
	if(str.size()==0)
		{
			cout<<osf<<endl;
			return true;
		}
	for(int i=0;i<=str.size();i++)
	{
       string pre=str.substr(0,i);
       if(mp.find(pre)!=mp.end() and checkbreak(str.substr(i),osf+pre+" "))
               return true;
	}

	return false;

}
bool word_breakDP(string str,int *dp)
{ 
	if(str.size()==0)
		return true;
	if(dp[n]==-1)
			{ dp[n]=0;
	
	for(int i=1;i<=str.size();i++)
	{
       string pre=str.substr(0,i);
       if(mp.find(pre)!=mp.end() and word_breakDP(str.substr(i),dp))
       	  { 
       	  	dp[n]=1;
       	  	return true;
       	  }
	}
}

	return dp[n]==1;

}
int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	int *dp=new int[s.size()];
	for(int i=0;i<s.size();i++)
		dp[i]=-1;
	string str;
	for(int i=0;i<n;i++)
		{ cin>>str;
		 mp[str]=true;
        }


   cout<<checkbreak(s);
   cout<<word_breakDP(s,dp,n);
   cout<<word_break_print(s,"");
	
}