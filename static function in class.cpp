#include&lt;iostream&gt;
using namespace std;
class a
{
static int x; //data member
public : void getx() //member function

{
cout&lt;&lt;&quot;enter the value of x:&quot;;
cin&gt;&gt;x;
x++;
}
void showx() //member function
{
cout&lt;&lt;&quot;value of x is :&quot;&lt;&lt;x&lt;&lt;endl;
}
}a1,a2,a3;
int a::x;
main()
{
a1.getx();
a1.showx();
a2.showx(); //gives garbage value=0 if &quot;static&quot; is
not declared and defined
a3.showx();
}
