#include<stdio.h>
#include<conio.h>
#include<iostream.h>

class example
{
	private:
	int a;
	public:
	~example()
	{
		cout<<"this is destructor";
	}
};
void fun()
{
	example e;
}
int main()
{
	clrscr();
	fun();
	getch();
        
        return 0;
}
