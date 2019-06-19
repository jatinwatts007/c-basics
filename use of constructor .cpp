#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class example
{
	private:
		int s;
		int a;
	public:
	example()
	{
		s=10;
		a=29;
	}
	void show_data()
	{
		cout<<"s="<<s;
		cout<<"\na="<<a;
	}
};
void main()
{
	clrscr();
	example e1;
	e1.show_data();
	getch();
}
