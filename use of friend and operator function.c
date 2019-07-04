#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class complex
{
	int a,b;
	public:
	void readdata (int x,int y)
	{
		a=x;b=y;
	}
	void show_data()
	{
		cout<<"a="<<a;
		cout<<"\nb="<<b;
	}
	friend complex operator +(complex,complex);
	};
	complex operator +(complex x,complex y)
	{
		complex temp;
		temp.a=x.a+y.a;
		temp.b=x.b+y.b;
		return temp;
	}
	void main()
	{
		clrscr();
		complex c1,c2,c3;
		c1.readdata(3,4);
		c2.readdata(5,6);
		c3=c1+c2;
		c3.show_data();
		getch();
	}
