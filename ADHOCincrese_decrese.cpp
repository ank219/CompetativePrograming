#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool check_pos=true,split_pos=true;

    int first;
    cin>>first;
    for(int i=0;i<n;i++)
    {
        int val;
        cin>>val;
        if(!(val<first))
            check_pos=false;
        else if(!(val>first))
            split_pos=false;

        first=val;
    }

    if(split_pos==true) cout<<"true"<<endl;
    else
        cout<<"false"<<endl;



}
