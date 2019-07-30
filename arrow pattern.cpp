#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int i,n,j,k,c,x;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i<=(n+1)/2)
        {
            for(k=1;k<i;k++)
            {
                cout<<" ";
            }
            for(j=1;j<(i+1);j++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
        if(i>(n+1)/2)
        {
            for(c=i;c<n;c++)
            {
                cout<<" ";
            }
            for(x=i;x<=n;x++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
    return 0;
}


