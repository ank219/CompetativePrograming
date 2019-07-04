#include<bits/stdc++.h>
using namespace std;
int check(const string &str)
{
    if(str.length() == 0)
         return 0;
    return str[str.length()-1]-'0'+check(str.substr(0,str.length()-1))*10;
}
int main()
{   string str;
    cin>>str;
    int a=check(str);
    cout<<a;
}
