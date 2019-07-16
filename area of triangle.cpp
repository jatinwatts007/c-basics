#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class area
{
	private:
	int length,breath,area;
	public:
	void calculation(int i,int j)
	{
		area=(i*j)/2;
	}
	void show_data()
	{
		cout<<"area of triangle="<<area;
	}
};
void main()
{
	clrscr();
	area a1;
	int r,f;
	cout<<"enter length and breath to see the area of triangle\nlength=";
	cin>>r;
	cout<<"breath=";
	cin>>f;
	a1.calculation(r,f);
	a1.show_data();
	getch();
}
