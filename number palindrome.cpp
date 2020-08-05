#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int j=2;
	for(int i=1;i<=
	n+n-1;i++){
		if(i>n){
			cout<<i-j;
			j+=2;
		}else{
			cout<<i;
		}
	}
}
