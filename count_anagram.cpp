#include<bits/stdc++.h> 
using namespace std; 
vector<string>v;
void subString(string s, int n)  
{ 
    for (int i = 0; i < n; i++)  
    {
        for (int len = 1; len <= n - i; len++) 
        {
            string x=s.substr(i,len);
            sort(x.begin(),x.end());
            v.push_back(x);
        }
    }
    int count=0;
    unordered_map<string,int> mp;
     for(auto i:v)
     {
        mp[i]++;
     }
     for(auto i=mp.begin();i!=mp.end()i++)
     {
        if(i->second>count)
             count=i->second;
     }

} 

int main()  
{
    int t;
    cin>>t;
    while(t)
    {
        string str;
        cin>>str; 
        int n=str.length();
        subString(str,n); 
        t--;
        v.erase(v.begin(),v.end());
    }
    return 0; 
} 
