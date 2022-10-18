#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
class miltiplication
{
	private :
		int k;
		int j;
	public :
		inline int multiplyvalue (int k,int j)
		{
			return k * j;
		}
		inline int cubicvalue (int p)
		{
			return pow (p,3);
		}
};
int main ()
{
	int k,j;
	int p;
	miltiplication m1;
	cout<<endl<<setw(50)<<"**********to multiply value**********";
	cout<<endl<<"1)enter two number to multiplication : ";
	cout<<endl<<"\tenter first digit :- ";
	cin>>k;
	cout<<"\tenter second digit :- ";
	cin>>j;
	cout<<endl<<"ans:- your multiplication value is "<<m1.multiplyvalue(k,j)<<endl;
	cout<<endl<<setw(50)<<"**********to get cube value**********";
	cout<<endl<<"1)enter any get cubic value of number : ";
	cin>>p;
	cout<<endl<<"ans:- your cubic value is "<<m1.cubicvalue(p);
	return 0;
}

