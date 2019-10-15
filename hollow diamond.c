#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,u,l;
	clrscr();
	for(i=1;i<=5;i++)
	{

		for(j=5;j>=i;j--)
		{
			printf(" ");
		}
		printf("*\n");
	}

	  for(u=1;u<5;u++)
	  {
		for(k=0;k<=u;k++)
		{
			printf(" ");
		}
		printf("*\n");
	  }
	  getch();
}
