#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,l,t,n;
     cin>>t;
     while(t--)
     {
         l=0;
         cin>>n;
         int *arr= new int[n]; 
         for(i=0;i<n;i++)
         {
             arr[i]=i+1;
         }
         for(i=0;i<n-2;i++)
         {
             for(j=i+1;j<n-1;j++)
             {
                 for(k=j+1;k<n;k++)
                 {
                     
                     if((arr[i]+arr[j]+arr[k])%2==0)
                     {
                         l++;
                     }
                 }
             }
         }
         cout<<l<<endl;
         delete[] arr;
     }
	//code
	return 0;
}
