#include<iostream>
using namespace std;
class table
{
	int t,a;      //data members
public: void getnumber();     //function  calling
 void showtable();   //use "private:" to make a member private 
}obj;
void table :: getnumber()       // "::"- scope resolution operator
	{
			cout<<"enter the value of a:";
	cin>>t;
	}
	void table :: showtable()
	{
		for (a=1;a<=10;a++)
		{
		
cout<<t<<"*"<<a<<"="<<t*a<<endl;
	}
	}
main()
{
obj.getnumber();
obj.showtable();           //function call

}
