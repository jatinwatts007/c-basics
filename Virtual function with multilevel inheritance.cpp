#include<iostream>
using namespace std;
class Base
{
public: virtual void print()
{
cout<<"PRINT BASE CLASS"<<endl;
}
void show()
{
cout<<"SHOW BASE CLASS"<<endl;
}
};
class Base2:public Base
{
public: virtual void print()
{
cout<<"PRINT BASE2 CLASS"<<endl;
}
void show()
{
cout<<"SHOW BASE2 CLASS"<<endl;
}
};
class Derived:public Base2
{
public: void print()    //REDIFINITION OF VIRTUAL FUNCTION
{
cout<<"PRINT DERIVED CLASS"<<endl;
}
void show()
{
cout<<"SHOW DERIVED CLASS"<<endl;
}
};
main()
{
Base *bptr;
Base2 *bptr2;
Derived d;
bptr=&d;
bptr->print();
bptr->show();
bptr2=&d;
bptr2->print();
bptr2->show();
}
