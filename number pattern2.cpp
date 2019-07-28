#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int i,j,n,k,t,x;
	clrscr();
	cin>>n;
	if(n%2==0)
	{
		t=0;
		x=1;
	}
	if(n%2==1)
	{
		t=1;
		x=2;

	}
		for(i=0;i<(n+t)/2;i++)
		{
			for(j=((n*2*i)+1);j<=((2*n*i)+n);j++)
			{
				cout<<j<<" ";
			}
			cout<<endl;
		}
		for(j=n;j>t;j--)
		{
			for(k=(n*(j-x))+1;k<=(n*(j-t));k++)
			{
				cout<<k<<" ";
			}
			cout<<endl;
			j--;
		}

	getch();
}
