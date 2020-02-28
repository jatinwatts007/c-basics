#include<iostream>
using namespace std;
sum(int x, int y)      //function definition
{
	cout<<"integer addition :"<<x+y<<endl;
}
sum(float x, float y)
{
	cout<<"float addition :"<<x+y<<endl;
}
sum(int x,double y)
{
	cout<<"mixed addition :"<<x+y<<endl;
}
main()
{
	sum(1.345,6.756);
	sum(5,4.8);         //function call
	sum(4,6);
}
