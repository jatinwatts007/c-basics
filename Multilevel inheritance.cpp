#include <iostream>

using namespace std;

class A
{
public:
	int x;
	A()
	{
		cout << "Inside the constructor of class A" << endl;
	}

	~A()
	{
		cout << "Inside the destructor of class A" << endl;
	}
};

class B:public A
{
public:
	int x;
	B()
	{
		cout << "Inside the constructor of class B" << endl;
	}

	~B()
	{
		cout << "Inside the destructor of class B" << endl;
	}
};

class C:public B
{
public:
	int x;
	C()
	{
		cout << "Inside the constructor of class C" << endl;
	}

	~C()
	{
		cout << "Inside the destructor of class C" << endl;
	}
};

int main()
{
	C object;

	return 0;
}
