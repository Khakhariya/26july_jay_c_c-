#include<iostream>
using namespace std;
class sinterest
{
	private:                         
		float simple;
	public:
	sinterest (int principal, int year, float rate)
	{
		simple = (principal * year * rate) / 100;
		cout<<"your simple interest is "<<simple;
	}
};
int main ()
{
	int principal;
	int year;
	float rate;
	cout<<"enter the amount of principal :- ";
	cin>>principal;
	cout<<"enter the period of year :- ";
	cin>>year;
	cout<<"enter the rate of interest :- ";
	cin>>rate;
	sinterest e1 (principal, year, rate);
	return 0;
}
