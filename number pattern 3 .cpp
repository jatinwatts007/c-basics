#include<conio.h>
#include<stdio.h>
#include<iostream>
using namespace std;
main()
{
	int i,j,k,h,n;
	cout<<"enter the number of rows you want\n";
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
	getch();
}
