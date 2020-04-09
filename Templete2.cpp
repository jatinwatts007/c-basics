#include<iostream>
using namespace std;
template <typename type>
type square(type num)
{
return num * num;
}
template <typename type2>
type2 sum(type2 num)
{
return num + num;
}
main()
{
int num1 = 3;
cout<<"Square of "<<num1<<" is: "<<square(num1)<<endl;
float num2 = 5.6;
cout<<"Square of "<<num2<<" is: "<<square(num2)<<endl;
double num3 = 123.456;
cout<<"Square of "<<num3<<" is: "<<square(num3)<<endl;
int num11 = 13;
cout<<"Sum of "<<num11<<" is: "<<sum(num11)<<endl;
float num22 = 15.6;
cout<<"Sum of "<<num22<<" is: "<<sum(num22)<<endl;
double num33 = 1234.456;
cout<<"Sum of "<<num33<<" is: "<<sum(num33);
}
