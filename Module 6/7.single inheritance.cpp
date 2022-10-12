#include<iostream>
using namespace std;
class cricketer
{
	public:
		char player [10];
		char performance [20];
		int runs;
		int match;
		void inputdata()
		{
			cout<<"\n\t..........enter player details.........."<<endl;
			cout<<"enter the player name:-";
			cin>>player;
			cout<<"enter the total runs:-";
			cin>>runs;
			cout<<"how many match is played:-";
			cin>>match;
		}
};
class batsman : public cricketer
{
	public:
		int averageruns()
		{
			return runs/match;
		}
		int displaydata()
		{
			int aver;
			cout<<"\n\t\t..........player detalis.........."<<endl;
			cout<<endl<<"\t\t|player name is"<<player;
			cout<<endl<<"\t\t|total runs:-"<<runs;
			cout<<endl<<"\t\t|how many match is played:-"<<match;
			aver = averageruns();
			cout<<endl<<"\t\t|average runs is"<<aver;
			if (aver < 45)
		         cout <<endl<<"\t\t|perfomance of player is good.";	
          	else if (aver < 80)
		         cout <<endl<<"\t\t|perfomance of player is nice.";
		    else if (aver < 80)
		         cout <<endl<<"\t\t|perfomance of player is best.";		
		    cout<<endl<<endl;
		}
};
int main()
{
	batsman b1,b2,b3;
	b1.inputdata();
	b2.inputdata();
	b3.inputdata();
	
	b1.averageruns();
	b2.averageruns();
	b3.averageruns();
	
	b1.displaydata();
	b2.displaydata();
	b3.displaydata();
	return 0;
}
