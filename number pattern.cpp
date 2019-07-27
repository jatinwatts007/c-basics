#include <iostream>
using namespace std;

int main() {
    
    int i,j,k,h,n;
	
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(h=n;h>i;h--)
		{
			cout<<" ";
		}

		for(j=i;j<=i+(i-1);j++)
		{
			cout<<j;
		}
			cout<<"\n";
	}
    
    return 0;
    
}

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  



