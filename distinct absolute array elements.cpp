#include<iostream>
using namespace std;
int main()
 {
       int i,j,k,t,n,h;
     cin>>t;
     while(t--)
     {
         cin>>n;
           int *arr=new   int[n];
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
             if(arr[i]<0)
             {
                 arr[i]=-arr[i];
             }
         }
         h=0;
         for(i=0;i<n;i++)
         {
             k=0;
             for(j=i+1;j<n;j++)
             {
                 if(arr[i]==arr[j])
                 {
                     k++;
                 }
             }
                 if(k==0)
                 {
                     h++;
                 }
             
         }
         cout<<h<<endl;
     }
	//code
	return 0;
}
