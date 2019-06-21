#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class example
{
	private:
	int a;
	int b;
	public:
	example()
	{
		a=9;
		b=10;
	}
	example(int h,int c)
	{
		a=h;
		b=c;
	}
	example(int s)
	{
		a=b=s;
	}
	example(example &c)
	{
		a=c.a;
		b=c.b;
	}
	void show_data()
	{
		cout<<"a="<<a;
		cout<<"\nb="<<b;
		cout<<"\n";
	}
};
void main()
{
	clrscr();
	example e1,e2(1,2),e3(3),e4(e1);
	cout<<"data with no argument in constructor\n";
	e1.show_data();
	cout<<"data with 2 arguments in constructor\n";
	e2.show_data();
	cout<<"data with 1 argument in constructor\n";
	e3.show_data();
	cout<<"data with object in constructor\n";
	e4.show_data();
	getch();
}
