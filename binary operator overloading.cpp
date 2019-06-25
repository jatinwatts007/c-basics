#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class example
{
	private:
	int a;
	int b;
	public:
	void setdata(int x, int y)
	{
		a=x;
		b=y;
	}
	void showdata()
	{
		cout<<"a="<<a;
		cout<<"\nb="<<b;
	}
	example operator +(example y)
	{
		example temp;
		temp.a=y.a + a;
		temp.b=y.b + b;
		return temp;
	}
};
void main()
{
	clrscr();
	example e1,e2,e3;
	e1.setdata(1,2);
	e2.setdata(3,4);
	e3=e1+e2;
	e3.showdata();
	getch();
}
