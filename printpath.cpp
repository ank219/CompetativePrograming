#include<bits/stdc++.h>
using namespace std;
void count_ways(int n_r,int m_c,int r,int c,string osf)
{
    if(r==n_r and c==m_c)
    {
        cout<<osf<<endl;
        return;
    }

    if(r>n_r or c>m_c)
         return;

     count_ways(n_r,m_c,r+1,c,osf+"h");
     count_ways(n_r,m_c,r,c+1,osf+"v");

}
int main()
{
    int n,m;
    cin>>n>>m;
    int i,j;

  count_ways(n,m,0,0,"");
}
