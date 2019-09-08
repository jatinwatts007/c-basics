#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,n,t;
     cin>>t;
     while(t--)
     {
         cin>>n
         int *arr= new int[n+2];
         for(i=0;i<n+2;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n+1;i++)
         {
             l=0;
             for(j=0;j<n+2;j++)
             {
                 if(arr[i]==arr[j])
                 l++;
             }
             if(l==2)
             {
                 cout<<arr[i]<<" ";
             }
         }
         cout<<endl;
     }
	//code
	return 0;
}
