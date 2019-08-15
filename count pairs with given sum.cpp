#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,t,l,g;
     cin>>t;
     while(t--)
     {
         l=0;
         cin>>k;
         int *arr= new int[k];
         cin>>g;
         for(i=0;i<k;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<k;i++)
         {
             for(j=i+1;j<k;j++)
             {
                 if(arr[i]+arr[j]==g)
                 {
                     l++;
                 }
             }
         }
         cout<<l<<endl;
         delete [] arr;
     }
     
	//code
	return 0;
}
