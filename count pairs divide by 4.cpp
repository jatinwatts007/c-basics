#include<iostream>
using namespace std;
int main()
 {
     int i,j,c,t,n;
     cin>>t;
     while(t--)
     {
         cin>>n;
         int*arr= new int[n];
         c=0;
         for(i=0;i<n;i++)
         {
             cin>>arr[i];
         }
         for(i=0;i<n;i++)
         {
             for(j=i+1;j<n;j++)
             {
                 if((arr[i]+arr[j])%4==0)
                 {
                     c++;
                 }
             }
         }
         cout<<c<<endl;
         delete [] arr;
     }
	//code
	return 0;
}
