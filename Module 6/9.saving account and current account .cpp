#include<iostream>
#include<string.h>
using namespace std;
class details
{
	public :
		int number;
		int balance;
		char name [30];
		void detail ()
		{
			cout<<endl<<"***enter your account details***";
			cout<<endl<<"enter your name :- ";
			cin>>name;
			cout<<"enter your account number :- ";
			cin>>number;
			cout<<"enter your balance :- ";
			cin>>balance;
		}
};
class saving : public details 
{
	private :
		int years;
		int SI;
		int withamount;
	public :
		void simpleinterest ()
		{
			cout<<endl<<"***customer details***"<<endl;
			cout<<endl<<"|"<<" your name :- "<<name<<"|";
			cout<<endl<<"|"<<" type :- saving account"<<"|";
			cout<<endl<<"|"<<" your account number :- "<<number<<"|";
			cout<<endl<<"|"<<" your balance :- "<<balance<<"|"<<endl<<endl;
			cout<<"enter your SI years:-";
			cin>>years;
		}
		void showinterest ()
		{
			SI = (balance*years*5)/100;
			cout<<endl<<"|your simple interest amount will be"<<SI<<"|";
		}
		void withdrawl ();
		void showwithdrawl ();
};
void saving :: withdrawl ()
{
	cout<<endl<<"***customer details***"<<endl;
	cout<<endl<<"|"<<" your name :- "<<name<<"|";
	cout<<endl<<"|"<<" type :- saving account"<<"|";
	cout<<endl<<"|"<<" your account number :- "<<number<<"|";
	cout<<endl<<"|"<<" your balance :- "<<balance<<"|"<<endl<<endl;
}
void saving :: showwithdrawl ()
{
	cout<<endl<<"enter withdrawl amount :- ";
	cin>>withamount;
	if(balance > withamount)
	{
		balance -= withamount;
		cout<<endl<<"|"<<" your balance :- "<<balance<<"|";
	}
	else 
	{
		cout<<endl<<"you are not able to withdrawl amount due to not enough balance.";
		cout<<endl<<"|"<<" your balance :- "<<balance<<"|";
	}
}
class current : public details
{
	public :
		int chequeno;
		string chequenm;
		int withamount;
		int penaltyp;
		void cheque()
		{
			cout<<endl<<"***enter cheque details***"<<endl;
			cout<<endl<<"enter check no. :- ";
			cin>>chequeno;
			cout<<"enter name on cheque :- ";	
			cin>>chequenm;
			cout<<"enter withdrawl amount:- ";	
			cin>>withamount;
		}
		void showcheque ()
		{
			cout<<endl<<"|your cheque no is"<<chequeno<<"|";
			cout<<endl<<"|name on cheque is"<<chequenm<<"|";
			cout<<endl<<"|withdrawl amount is"<<withamount<<"|";
			if (withamount < balance)
			{
				balance -= withamount;
				cout<<endl<<"your balance is"<<balance;
			}
			else 
			{
				cout<<endl<<"your check is bounce";
				cout<<endl<<"|"<<"your balance :- "<<balance<<"|"<<endl;
			}
		}
		void penalty ()
	   	{
			if (balance < 5000)
			{
				penaltyp = (balance * 5.5)/100;
				cout<<endl<<"your penalty is"<<penaltyp;
			    balance -= penaltyp;
				cout<<endl<<"|"<<"your balance :- "<<balance<<"|"<<endl;	 
			}
			else
			{
			    cout<<endl<<"your account balance is upto date";
		    	cout<<endl<<"|"<<"your balance :- "<<balance<<"|"<<endl;	
			}
	    }
};
int main ()
{
	int k,j;
	int password;
	saving s1;
	current c1;
	cout<<"press 1.if your account is saving "<<endl;
	cout<<"press 2.if your account is current "<<endl;
	cout<<"enter your bank account type :- ";
	cin>>k;
	switch (k)
	{
		case 1:
			s1.detail();
			cout<<"no checkbook facility is available for saving account "<<endl;
			cout<<"press 1.for simple interest details "<<endl;
	        cout<<"press 2.for withdrawl an amount "<<endl;
	        cout<<"enter what would you like to process :- ";
	        cin>>j;
	        switch (j)
	        {
	        	case 1:
	        		s1.simpleinterest();
	        		s1.showinterest();
	        	break;
	       	    case 2:
	        		cout<<endl<<"enter your password :-";
	        		cin>>password;
	        		if (password == 1111)
	        		{
	        			s1.withdrawl();
	        			s1.showwithdrawl();
					}
				break;
	     	}
	     	break;
	    case 2:
	    	c1.detail();
	    	cout<<" checkbook facility is available for current account "<<endl;
	    	cout<<"if your balance is below 10000 charges will be applied. "<<endl;
			cout<<"press 1.for cheque book facility "<<endl;
	        cout<<"press 2.for withdrawl an amount "<<endl;
	        cout<<"enter what would you like to process :- ";
	        cin>>j;
	        switch (j)
	        {
	        	case 1:
	        		c1.cheque();
	        		c1.showcheque();
	        		cout<<endl<<"\n----------checking minimum balance----------";
	        		c1.penalty();
	        	break;
			}
		break;
	default:
		break;
	}
	return 0;
}
