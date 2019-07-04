#include<bits/stdc++.h>
using namespace std;
void ones(int n,string osf)
{
    if(n==0)
    {
        cout<<osf<<endl;
        return;
    }

    ones(n-1,osf+"0");
    if(osf.size()==0 or osf[osf.size()-1]=='0')
        ones(n-1,osf+"1");
}

int main()
{
    int n;
    cin>>n;
    ones(n,"");

}
