#include<stdio.h>
#include<conio.h>
int fun(int a);
void main()
{
	unsigned n,factorial;
	clrscr();
	printf("enter value to see its factorial value\n");
	scanf("%u",&n);
	factorial=fun(n);
	printf("factorial value is %u",factorial);
	getch();
}
int fun(int a)
{
	if (a==1)
	{
		return 1;
	}
	else
	{
		return a*(fun(a-1));
	}
}
