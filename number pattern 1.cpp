#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int i,j,k,h=1,n,g;
    cin>>n;
    for(i=h;i<=n;i++)
    {
        for(j=h;j<=i;j++)
        {
            cout<<j;
        }
        for(g=((2*n)-2);g>((i+j)-3);g--)
        {
            cout<<" ";
        }
        for(k=i;k>=h;k--)
        {
            cout<<k;
        }
        cout<<endl;
    }
    return 0;
}
