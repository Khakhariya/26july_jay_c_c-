#include<iostream>
using namespace std;
class bankaccount 
{
	public:
		char name[30];
		double accountno;
		char type[30];
		int balance;
		int assign ()
		{
			cout<<"enter the name of the depositor :- ";
			cin>>name;
			cout<<"enter account number :- ";
			cin>>accountno;
			cout<<"enter the type of account :- ";
			cin>>type;
			cout<<"enter the previous balance :- ";
			cin>>balance;
			return 0;
		};
		int deposit ()
		{
			int damount;
			cout<<"enter the deposit amount :- ";
			cin>>damount;
			balance += damount;
			cout<<"your balance is "<<balance;
			return 0;
		}
		int withdraw ()
		{
			int withd;
			cout<<"enter withdraw amount :- ";
			cin>>withd;
			if (withd < balance)
			{
				balance -= withd;
				cout<<"balance amount in the account is :- "<<balance<<endl; 
			}
	    	if (withd > balance)
	    	{
	    		cout<<".....insufficient balance in your account....."<<endl;
	    		cout<<"your balance is :- "<<balance<<endl;
			}
            return 0;
		}
		int show ()
		{
			cout<<"name of the depositor is :- "<<name<<endl;
	   		cout<<"your balance is :- "<<balance<<endl;	
		}
};
int main ()
{
	bankaccount obj;
	obj.assign ();
	int j;
	cout<<".....press 1 to deposite an amount....."<<endl;
	cout<<".....press 2 to withdraw an amount....."<<endl;
	cout<<".....press 3 to withdraw check balance....."<<endl;
	cin>>j;
	if (j == 1)
	{
		obj.deposit();
	}
	if (j == 2)
	{
		obj.withdraw();
	}
		if (j == 3)
	{
		obj.show();
	}	
	return 0;
}
