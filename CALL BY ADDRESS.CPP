 //CALL BY ADDRESS
#include<iostream>
using namespace std;
display(int *x)
{
	*x=*x+1;
	cout<<"value of x is: "<<*x<<endl;
	cout<<"address of x is "<<x<<endl;
}
main()
{
	int x;
	cout<<"enter the value of x: ";
	cin>>x;
	display(&x);
	cout<<"the value of x is : "<<x<<endl;
	cout<<"address of x is: "<<&x<<endl;}
