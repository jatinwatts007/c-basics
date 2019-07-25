#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
	clrscr();
	int a[7],t,i,j,k=0;
	cout<<"enter the test case value\n";
	cin>>t;
	while(t--)
	{
		cout<<"enter five values in array\n";
		for(i=0;i<7;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<7;i++)
		{
			for(j=(i+1);j<7;j++)
			{
				if(i*a[i]>j*a[j])
				{
					k++;
				}
			}
		}
		cout<<"answer is"<<k<<"\n";
	}
	getch();
}
