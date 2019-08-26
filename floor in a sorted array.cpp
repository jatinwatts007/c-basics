#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,t,n;
     cin>>t;
     while(t--)
     {
         j=-1;
         cin>>n>>k;
         int *arr= new int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n;i++)
         {
             if(k>=arr[i])
             {
                 j++;
             }
         }
         if(j==-1)
         {
             cout<<-1<<endl;
         }
         else
         {
             cout<<j<<endl;
         }
         delete [] arr;
     }
	//code
	return 0;
}
