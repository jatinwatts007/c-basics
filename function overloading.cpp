#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class area
{
	private:
	int side;
	int length,breath;
	int height;
	float base;
	public:
	void fun_over(int s)
	{
		side=s;
		cout<<"area of square is ="<<side*side;
	}
	void fun_over(int i,int j)
	{
		length=i;
		breath=j;
		cout<<"area of rectangle is ="<<length*breath;
	}
	void fun_over(int h,float k)
	{
		height=h;
		base=k;
		cout<<"area of triangle is ="<<(height*base)/2;
	}
};
void main()
{
	area a;
	clrscr();
	int r;
	cout<<"enter side to see the area of square\nside=";
	cin>>r;
       a.fun_over(r);
       int f,l;
       cout<<"\nenter length and breath to see the area of rectangle\nlength=";
       cin>>f;
       cout<<"breath=";
       cin>>l;
       a.fun_over(f,l);
       int d;
       float n;
       cout<<"\nenter height and base to see the area of triangle\nheight=";
       cin>>d;
       cout<<"base=";
       cin>>n;
       a.fun_over(d,n);
       getch();
}
