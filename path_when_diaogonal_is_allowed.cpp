#include<bits/stdc++.h>
using namespace std;
int count_ways(int n_r,int m_c,int r,int c)
{
    if(r==n_r and c==m_c)
         return 1;
    if(r>n_r or c>m_c)
         return 0;
    int d_result=0;
    if(c==r or c+r==n_r-1)
       d_result=count_ways(n_r,m_c,r+1,c+1);


    return count_ways(n_r,m_c,r+1,c)+count_ways(n_r,m_c,r,c+1)+d_result;


}
int main()
{
    int n,m;
    cin>>n>>m;
    int i,j;

   cout<<count_ways(n,m,0,0)<<endl;
}
