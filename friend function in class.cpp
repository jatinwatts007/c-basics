#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class A
{
	private:
	int a;
	int b;
	public:
	void fun(int x, int y)
	{
		a=x*y;
		b=x+y;
	}
	void show()
	{
		cout<<"a="<<a;
		cout<<"\nb="<<b;
	}
};
class B:public A
{

	public:
	friend void  A::fun(int a,int b);
	friend void  A::show();
};
void main()
{
	clrscr();
	B b1;
	b1.fun(2,4);
	b1.show();
	getch();
}
