#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string x,y;
	cout<<"enter x: ";
	getline(cin,x);
	
	fstream fw("ca.txt",ios::out|ios::app);
	fw<<x;
	fw.close();
	
	fstream fr("ca.txt",ios::in);
	
	while(fr>>y)
		{
				cout<<y<<ends;
			
}
	
	fr.close();
	
}
