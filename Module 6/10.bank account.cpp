#include<iostream>
using namespace std;
class account
{
	public :
		char cname[20];
		long int ano;
		int type;
		float balance;
		void details ()
		{
			cout<<"enter your name :- ";
			cin>>cname;
			cout<<"enter your account number :- ";
			cin>>ano;
			cout<<"enter your balance :- ";
			cin>>balance;
		}
		void displaybalance ()
		{
			cout<<endl<<"your balance is"<<balance;
		}
};
class saving : public account 
{
	public :
	float deposit;
	float PI;
	float withamount;
	float penalty;
	    void Deposit ();
	    void computeinterest ();
	    void permitwithdraw ();
	    void Penalty ();
};
void saving :: Deposit ()
{
	cout<<endl<<"how many amount deposit in your bank account :- ";
	cin>>deposit;
	balance +=deposit;
}
void saving :: computeinterest ()
{
	PI = (balance * 5)/100;
	cout<<endl<<"your deposit interest is "<<PI;
	balance += PI;
}
void saving :: permitwithdraw ()
{
	cout<<"enter amount want to withdraws :- ";
	cin>>withamount;
	balance -= withamount;
}
void saving :: Penalty ()
{
	if (balance < 5000)
	{
		penalty = (balance * 5.5)/100;
		cout<<"your penalty is"<<penalty;
		balance -= penalty;
	}
	else
	{
		cout<<endl<<"your account balance is upto date";
	}
}
class current : public account
{
	public :
};
int main ()
{
	int type;
	int ch,z;
	int password;
	saving s1;
	current c1;
	s1.details();
	cout<<"press 1 for saving account"<<endl;
	cout<<"press 2 for current account"<<endl;
	cout<<"enter account type first :- ";
	cin>>type;
	switch (type)
	{
		case 1:
			cout<<endl<<"1) accepts deposit from a customer and update balance.";
			cout<<endl<<"2)display the balance.";
			cout<<endl<<"3)compute and deposit interest.";
			cout<<endl<<"4)permit withdraws and updates the balance.";
			cout<<endl<<"5)check for the minimum balance, impose penalty,necessary and update the balance."<<endl;
		for (z = 0; z < 10; z++)
		{
			cout<<"enter what would want to do :- ";
			cin>>ch;
			    switch (ch)
			    {
			    	case 1:
			    		s1.Deposit();
			    	break;
			    	case 2:
			    		s1.displaybalance();
			    	break;
			    	case 3:
			    		s1.computeinterest();
			    	break;
			    	case 4:
			    		cout<<endl<<"enter your password :- ";
						cin>>password;
						if (password == 1111)
						{
							s1.permitwithdraw();
						} 
	     		    	break;
	     		    default :
	     		    	
			    	    break;
				}
				cout<<endl<<"press 1 for reprocess";
				cout<<endl<<"press 11 for no process";
				cout<<endl<<"do you want to process again :- ";
				cin>>z;
		}
		break;
		case 2:
		    break;
		default :
		    cout<<"enter valid intput";
			break; 
    }   
        s1.Penalty();
        cout<<endl<<"your final balance is"<<s1.balance;
        return 0;
}
