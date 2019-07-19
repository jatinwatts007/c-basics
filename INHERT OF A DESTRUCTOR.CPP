#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class A
{
	int a;
	public:
	~A()
	{
		cout<<"this is A destructor";
	}
};
class B:public class A
{
	int b;
	public:
	~B()
	{
		cout<<"this is B destructr";
		~A();
	}
};
void fun()
{
	B b;
}
void main()
{
       clrscr();
       fun();
	getch();
}


