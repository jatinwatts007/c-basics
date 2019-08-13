#include<iostream>
using namespace std;
int main()
 {
     int i,j,k,t;
     cin>>t;
     while(t--)
     {
         j=0;
         cin>>k;
         for(i=1;i<=k;i++)
         {
             j=(i*i)+j;
         }
         cout<<j<<endl;
     }
	//code
	return 0;
}
