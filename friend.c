#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
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
		cout<<a;
		cout<<b;
	}
};
class B
{

	friend void class A::fun(int x,int y);
	friend void class A::show();
};
void main()
{
	B b1;
	b1.fun();
	b1.show();
	getch();
}
