#include <iostream>
using namespace std;

int main() {
    
    int i,j,k,h,n;
	
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(h=n;h>i;h--)
		{
			cout<<" ";
		}

		for(j=i;j<=i+(i-1);j++)
		{
			cout<<j;
		}
		for(k=j-2;k>=i;k--)
		{
			cout<<k;
		}
			cout<<"\n";
	}
    
    return 0;
    
}
