// 1,8,54,384...
#include <iostream>
using namespace std;

int main() {
    int t,n,l,m;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    m=n;
	    l=1;
	   while(n!=0)
	   {
	        
	       l=l*n;
	       n--;
	   }
	    int s=(m*m)*l;
	    cout<<s<<endl;
	}
	return 0;
}
