#include&lt;iostream&gt;
using namespace std;
class table
{
int t,a; //data members
public: void getnumber(); //function calling
void showtable(); //use &quot;private:&quot; to make a
member private
}obj;
void table :: getnumber() // &quot;::&quot;- scope resolution
operator
{

cout&lt;&lt;&quot;enter the value of a:&quot;;

cin&gt;&gt;t;
}
void table :: showtable()
{
for (a=1;a&lt;=10;a++)
{

cout&lt;&lt;t&lt;&lt;&quot;*&quot;&lt;&lt;a&lt;&lt;&quot;=&quot;&lt;&lt;t*a&lt;&lt;endl;

}
}
main()
{
obj.getnumber();
obj.showtable(); //function call

}
