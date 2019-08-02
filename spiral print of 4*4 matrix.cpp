#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main()
{
	int n=4,i,j,k,h,z,t,l,m=0;
	clrscr();
	int a[4][4];
	for(t=0;t<n;t++)
	{
		for(l=0;l<n;l++)
		{
			m++;
			a[t][l]=m;
		}
	}
      for(i=0;i<n/2;i++)
	{
		for(j=i;j<n-i;j++)
		{
			cout<<a[i][j]<<" ";
		}
		for(k=i+1;k<=(n-i)-1;k++)
		{
			cout<<a[k][j-1]<<" ";
		}
		for(h=(k-1)-(1);h>=(n-k);h--)
		{
			cout<<a[k-1][h]<<" ";
		}

		for(z=(k-2);z>=(n-k)+1;z--)
		{
			cout<<a[z][h+1]<<" ";
		}

	}

	getch();
}
