#include<iostream>
#include<list>
using namespace std;
void display(list<int> a)
{
list<int>::iterator p;
for(p=a.begin();p!=a.end();p++)
cout<<endl<<*p<<endl;
}
int main()
{
int b;
list<int> x;//x is name of list
list<int> y(5);
for(int i=0;i<3;i++)
{
cout<<"ENTER ELEMENT OF LIST x: ";
cin>>b;
x.push_back(b);   //Add element at the end
}
cout<<"\n Displaying first list:";
display(x);  //FUNCTION CALL
list<int>::iterator p;
for(p=y.begin();p!=y.end();p++)
{
cout<<"ENTER ELEMENT OF LIST y: ";
cin>>*p;
}
cout<<"\n Displaying Second list:";
display(y);
cout<<"\n Pushing element at front:";
x.push_front(100);
display(x);
cout<<"\n Poping element from front:";
y.pop_front();
display(y);
cout<<"\nSorting first list:";
x.sort();
display(x);
cout<<"\n Sorting second list:";
y.sort();
display(y);
cout<<"\n Merging list:";
x.merge(y);
display(x);
cout<<"\n Reversed merged list";
x.reverse();
display(x);
}
