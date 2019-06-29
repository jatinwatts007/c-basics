#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class example
{
	private:
	static int a;
	static int b;
	public:
	static void show_data()
	{
		cout<<"a="<<a;
		cout<<"\nb="<<b;
	}
};
int example:: a=0;
int example:: b=0;
void main()
{
	clrscr();
	example::show_data();
	getch();
}
