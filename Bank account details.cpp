#include<iostream>
using namespace std;
class bank
{
	int acc_no,con_no;
	float acc_bal,deb_am,cre_am;
	char cus_name[10],acc_type[10];
	public: void get()
	{
		cout<<"enter acc no.:"<<endl;
		cin>>acc_no;
		cout<<"enter contact no:"<<endl;
		cin>>con_no;
		cout<<"enter account balance:"<<endl;
		cin>>acc_bal;
		cout<<"enter customer name:"<<endl<<"enter account type:"<<endl;
		cin>>cus_name>>acc_type;
	}
	void credit()
	{
		cout<<"enter credit amount:";
		cin>>cre_am;
		acc_bal= acc_bal+cre_am;
	
		cout<<"current balance:"<<acc_bal<<endl;
	}
	void debit()
	{
		cout<<"enter debit amount:";
		cin>>deb_am;
		acc_bal= acc_bal-deb_am;
	
		cout<<"current balance:"<<acc_bal<<endl;
	}
}a;
	main()
	{
		a.get();
		a.credit();
		a.debit();
	}
