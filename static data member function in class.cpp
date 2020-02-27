#include<iostream>
using namespace std;
class a
{
static int x;     //data member
public : void getx()     //member function
	{
		cout<<"enter the value of x:";
		cin>>x;
		x++;
	}
	void showx()      //member function 
	{
		cout<<"value of x is :"<<x<<endl;
	}
}a1,a2,a3;
int a::x;
main()
{
	a1.getx();
	a1.showx();
a2.showx();    //gives garbage value=0 if "static" is not declared and defined 
    a3.showx();
}
