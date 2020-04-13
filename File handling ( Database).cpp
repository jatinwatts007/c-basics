#include<iostream>
#include<string>
#include <fstream>
#include <cstdio>
using namespace std;

class details {
	public: 
	int rollNo;
	long long phoneNo,regNo;
	string name,address;
	public:
		void getData()
		{
			cout<<"enter Name:";
			cin>>name;
			cout<<"Enter RollNo:";
			cin>>rollNo;
			cout<<"Enter Registeration No:";
			cin>>regNo;
			cout<<"Enter Phone Number:";
			cin>>phoneNo;
			cout<<"Enter Address:";
			cin>>address;
	}
		
};
 class marks : public details
 {
 		public:
 		int ca1,ca2,total;
 		public:
		 void getMarks(){
 			cout<<"Enter marks of CA1:";
 			cin>>ca1;
 			cout<<"Enter marks of CA2:";
 			cin>>ca2;
 			total = ca1+ca2;
		 }
 };
int main(){
	
	marks m1;
	cout<<"Enter no. of students you want to add the details:";
	int n;
	cin>>n;
	fstream myfile;
  	myfile.open ("database.txt", ios::in | ios::out | ios::app);
	for(int i=0;i<n;i++){
		m1.getData();
		m1.getMarks();
		myfile<<"The details of student are:-\n";
		myfile<<"name:- "<<m1.name<<"\n";
		myfile<<"roll number:- "<<m1.rollNo<<"\n";
		myfile<<"registeration no.:- "<<m1.regNo<<"\n";
		myfile<<"phone no.- "<<m1.phoneNo<<"\n";
		myfile<<"address:- "<<m1.address<<"\n";
		myfile<<"CA1 marks:- "<<m1.ca1<<"\n";
		myfile<<"CA2 marks:- "<<m1.ca2<<"\n";
		myfile<<"Total marks:- "<<m1.total<<"\n"<<"\n";
	}
	myfile.close();
	cout<<"\n---------------------------------------------------------------------\n\n";
	string line;
  myfile.open ("database.txt", ios::in | ios::out);
  if (myfile.is_open())
  {
    while (getline (myfile,line))
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "\nUnable to open file";

	return 0;
}
