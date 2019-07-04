#include <iostream>
using namespace std;
int count=0;
void Print_path(int l_r, int l_c, int r, int c, string osf)
{
	if(r == l_r and c == l_c) {
		cout<<osf<<endl;
		count++;
		return ;
	}
	if(r>l_r or c>l_c) {
		return ;
	}

	Print_path(l_r, l_c, r+1, c, osf+"V");
	Print_path(l_r, l_c, r, c+1, osf+"H");
}
//int path(int l_r, int l_c, int r, int c)
//{
//
//	if(r == l_r and c == l_c)
//		return 1;
//	if(r>l_r or c>l_c)
//		return 0;
//
//	return path(l_r, l_c, r+1, c)+path(l_r, l_c, r, c+1);
//}

int main()
{
	int n,m;
	cin>>n>>m;
	Print_path(n-1, m-1, 0, 0, "");
	cout<<count;
	//cout<<path(n, m,0, 0);
	return 0;
}
