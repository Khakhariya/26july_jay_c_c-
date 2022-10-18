#include<iostream>
#include<iomanip>
using namespace std;
class array
{
	public :
		int x[10];
		int y;
		void getdata ()
		{
			for (y = 0; y < 2; y++)
			{
			cout<<"enter your number ";
			cin>>x[y];
		    } 
		}
		array operator + (array obj)
		{
			array obj1;
			for (y = 0; y < 2; y++)
			{
				obj1.x[y] = x[y] + obj.x[y];
			}
			return obj1;
		}
		void showdata ()
		{
			for (y = 0; y < 2; y++)
			{
				cout<<endl<<setw(15)<<"|"<<x[y]<<"|";
			}
		}
		void showdata1 ()
		{
			for (y = 0; y < 2; y++)
			{
				cout<<endl<<setw(30)<<"|"<<x[y]<<"|";
			}
		}
};
int main ()
{
	array X1,X2;
	cout<<"enter 1st 1D matrix :-"<<endl;
	X1.getdata();
	cout<<"enter 2st 1D matrix :-"<<endl;
	X2.getdata();
	cout<<endl<<"1st 1D matrix :-"<<endl;	
	X1.showdata();
	cout<<endl<<"2st 1D matrix :-"<<endl;	
	X2.showdata();
	array X3 = X1 + X2;
	cout<<endl<<"two matrix addition is under :-";
	X3.showdata1();
	return 0;
}
