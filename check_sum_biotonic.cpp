#include <bits/stdc++.h>
using namespace std;

int check_biotonic(int arr[],int n)
{
  int dp1[n],dp2[n],dp_b[n];
  int sum1=0,new_sum=0,new_sum2=0,sum2=0;
  for(int i=0;i<n;i++)
  	  { dp1[i]=1;
  	  	dp2[i]=1;
  	  }
 for(int i=1;i<n;i++)
 	 { 
      sum1=arr[i];
 	 	for(int j=0;j<i;j++)
 	 		if(arr[i]>arr[j])
 	 		{	dp1[i]=max(dp1[i],dp1[j]+1);
 	 		    sum1+=arr[j];
 	 		}
        	if(sum1>new_sum)
        	   new_sum=sum1;
 	 }
 for(int i=n-2;i>=0;i--)
 	 {  
    sum2=arr[i];
 	 	for(int j=n-1;j>i;j--)
 	 	{
    	if(arr[i]>arr[j])
 	 		{	dp2[i]=max(dp2[i],dp2[j]+1);
 	 		    sum2+=arr[j];
 	 		}
 	 	}
 	 		if(sum2>new_sum2)
 	 		  new_sum2=sum2;
 	 }	

 	 int result=0,curr=0;
 for(int i=0;i<n;i++)
 {
 	dp_b[i]=dp1[i]+dp2[i]-1;
 }
 for(int i=0;i<n;i++)
 {
      if(dp_b[i]>result)
         curr=new_sum-new_sum2+arr[i];
 }
 return curr;

}
int main()
{
  
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  	   cin>>arr[i];

  	cout<<check_biotonic(arr,n)<<endl;



}