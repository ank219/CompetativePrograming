#include <iostream>
#include <queue>
#define ll long long int
using namespace std;

ll distance(ll x, ll y){
	return x*x + y*y;
}

int main()
{
	int query, k;
	cin>>query>>k;
	priority_queue<ll> pq;
	while(query--) {
		int type;
		cin>>type;

		if(type==2) {
			cout<<pq.top()<<endl;;
		} else if(type == 1) {
			ll x, y;
			cin>>x>>y;
			if(pq.size() == k) {
				// work
				if(distance(x, y) > pq.top()) {
					// No work
				} else {
					pq.pop();
					pq.push(distance(x, y));
				}
			} else if(pq.size() < k) {
				pq.push(distance(x, y));
			}
		}
	}
	return 0;
}
