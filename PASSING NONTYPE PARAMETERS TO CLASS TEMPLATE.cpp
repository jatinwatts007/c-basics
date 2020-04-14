PASSING NONTYPE PARAMETERS TO CLASS TEMPLATE:

#include <iostream>
using namespace std;
template<class datatype, int size>
class A
{
    public:
    datatype x[size];
    void input()
    {
        int i =1;
        for (int j=0;j<size;j++)
        {
            x[j] = i;
            i++;
        }
    }
void display()
    {
        for(int i=0;i<size;i++)
        {
            cout << x[i] << " ";
        }
    }
};
main()
{
    A<int,10> a1;
    a1.input();
    a1.display();
}
