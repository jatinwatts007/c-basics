#include<stdio.h>
#include<iostream>
using namespace std;

class complex{
	int a,b;
	public: 
	void setdata(){
		cout<<"enter two values\n";
		cin>>a>>b;
	}
	complex operator + (complex c)
	{
		complex temp;
		temp.a = a+c.a;
		temp.b= b+c.b;
		return(temp);
	}
	int operator == (complex c){
		if((a+b) == (c.a+c.b)){
			return 1;
		}else {
			return 0;
		}
	}
	int operator != (complex c){
		if((a+b) != (c.a+c.b)){
			return 1;
		}else {
			return 0;
		}
	}
};
main()
{
	complex c1,c2,c3;
	c1.setdata();
	c2.setdata();
	c3=c1+c2;
	if(c1 == c2){
		cout<<"Sum is same ";
	}
		if(c1 != c2){
		cout<<"Sum is not same";
	}
}
