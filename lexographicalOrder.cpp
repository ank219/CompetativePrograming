#include<bits/stdc++.h>
using namespace std;

void lexo(int n,int limit)
{
    if(n>limit)    //base case
        return;
    if(n==limit)
    {
        cout<<n<<endl;
        return;
    }
    cout<<n<<endl;   //self work
    for(int i=(n==0)? 1:0;i<=9;i++)   // assumption
    {
       lexo(10*n+i,limit);
    }


}
int main()
{
    int limit;
    cin>>limit;

    lexo(0,limit);
}
