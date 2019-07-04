#include<bits/stdc++.h>
using namespace std;
int kadane(int *arr,int n)
{
    int l_b=0;
    int s_b=INT_MIN;
    int s=0,e=0,curr=0;
    for(int i=0;i<n;i++)
    {   
        
        l_b+=arr[i];
         if(l_b<0) 
               l_b=0;
   
        if(s_b<l_b)
          s_b=l_b;     
    }
   return s_b;
}
int check_largest(int **mat,int n,int m)
{  
	
	int curr=0,max_1=0;
   
   for(int i=0;i<m;i++)
    {   
       int *arr=new int[n];   
    	for(int p=0;p<n;p++)
   	        arr[p]=0;
       
        for(int j=i;j<m;j++)
        {
           for(int k=0;k<n;k++)
              arr[k]+=mat[k][j];
          curr=kadane(arr,n);

          if(max_1<curr) 
        	max_1=curr;
        }
       
    }
    return max_1;
}
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
 int n,m;
 cin>>n>>m;
 int **mat=new int *[n];
 for(int i=0;i<n;i++)
 	mat[i]=new int [m];

 for(int i=0;i<n;i++)
 	 	for (int j = 0; j < m; ++j)
 	 		cin>>mat[i][j];
 	 
 cout<<check_largest(mat,n,m)<<endl;

}
}