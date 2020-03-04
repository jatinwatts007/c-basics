#include<Studio.h>
#include<iostream>
using namespace std;
display(int x)  //function definition
{
	x=x+1;
	cout<<"value of x in display is: "<<x<<endl;
	cout<<"address of x in display is: "<<&x<<endl;
}
main()
{
	int x;
	cout<<"enter x:";
	cin>>x;
	display(x);  //function call
	cout<<"value of x in main is: "<<x<<endl;
	cout<<"address of x in main is "<<&x<<endl;
}
