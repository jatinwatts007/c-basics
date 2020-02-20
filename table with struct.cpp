#include<iostream>
using namespace std;
struct table
{
	int t,a;     //data members
	void getnumber()     //function 
	{
			cout<<"enter the value of a:";
	cin>>t;
	}
	void showtable()
	{
		for (a=1;a<=10;a++)
		{
		
cout<<t<<"*"<<a<<"="<<t*a<<endl;
	}
	}
}obj;
main()
{
	obj.getnumber();
obj.showtable();           //function call
}
