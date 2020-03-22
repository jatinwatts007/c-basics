#include <iostream>

using namespace std;

class A {
public:
    A() {
        cout << "Default Constructor of A is called" << endl;
    }

    A(int x) {
        cout << "A class constructor called" << endl;
        cout << "Value passed is: " << x << endl;
    }

    ~A() {
        cout << "A destructor called" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Default constructor of B is called" << endl;
    }

    B(int x1, int x) : A(x1) {
        cout << "B class constructor called" << endl;
        cout << "Value passed is: " << x << endl;
    }

    ~B() {
        cout << "B destructor called" << endl;
    }
};

int main() {
    B obj1;
cout<<endl<<"==============================================================="<<endl;
    B obj2{2, 5};
}
