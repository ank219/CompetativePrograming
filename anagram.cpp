#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
   {
       int n;
       cin>>n;
       vector<int> v;
       vector<string>v_n;
       string s;
       unordered_map<string,int> m;
       for(int i=0;i<n;i++)
            {
                cin>>s;
                sort(s.begin(),s.end());
                 m[s]++;
            }
        for(auto itr=m.begin();itr!=m.end();itr++)
              {
                   v_n.push_back(itr->first);
                   v.push_back(itr->second);
              }
        for(int i=0,j=0;i<=v.size();i++,j++)
        {
            cout<<v_n[j]<<" "<<v[i]<<"--";
        }
        cout<<endl;
   }

}
