#include<iostream>
using namespace std;
int main()
{
	int a[5],i,j,k,n=0;
	cin>>k;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(  a[i]-a[j]>=k)
			{
				n++;
			}	
		}
	}
	cout<<n;
	return 0;
	
}
