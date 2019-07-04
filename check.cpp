#include <iostream>
using namespace std;
int count=0;
vector<string> vec;
void Print_path(int l_r, int l_c, int r, int c, string osf)
{
	if(r == l_r and c == l_c) {
	   vec.push_back(osf);
		count++;
		return ;
	}
	if(r>l_r or c>l_c) {
		return ;
	}
	Print_path(l_r, l_c, r+1, c, osf+"V");
	Print_path(l_r, l_c, r, c+1, osf+"H");
	 if(c==r or c+r==l_r-1)
       Print_path(l_r,l_c,r+1,c+1,osf+"D");
}


int main()
{
	int n,m;
	cin>>n>>m;
	Print_path(n-1, m-1, 0, 0, "");
	for(auto i : vec)
	    cout<<i<<" ";
	cout<<count;
	//cout<<path(n, m,0, 0);
	return 0;
}
