#include<bits/stdc++.h>
using namespace std;
int count_ways(int n_r,int m_c,int r,int c)
{
    if(r==n_r and c==m_c)
         return 1;
    if(r>n_r or c>m_c)
         return 0;

    return count_ways(n_r,m_c,r+1,c)+count_ways(n_r,m_c,r,c+1);


}
int main()
{
    int n,m;
    cin>>n>>m;
    int i,j;

   cout<<count_ways(n,m,0,0)<<endl;
}
