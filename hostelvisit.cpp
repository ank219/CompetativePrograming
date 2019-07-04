#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll check(ll x,ll y)
{
    return x*x+y*y;
}
int main()
{
    ll q,r;
    priority_queue<ll> pq;
    cin>>q>>r;
    while(q--)
    {
        ll val;
        cin>>val;
        if(val==1)
        {   ll x,y;
            cin>>x>>y;
            if(pq.size==k)
            {
                if(check(x,y)<=pq.top())
                {
                    pq.pop();
                    pq.push(check(x,y));

                }

            }
            else if(pq.size()<k)
            {
                pq.push(check(x,y));
            }
        }
        else if(type==2) {
			cout<<pq.top()<<endl;
        }

    }





}
