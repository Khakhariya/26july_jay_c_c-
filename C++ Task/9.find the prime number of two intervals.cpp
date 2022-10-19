#include<iostream>
using namespace std;
int main ()
{
	int number1;
	int number2;
	int temp;
	int p;
	cout<<"enter first number :- ";
	cin>>number1;
	cout<<"enter last number :- ";
	cin>>number2;
	if (number1 > number2)
	{
		temp = number1;
		number1 = number2;
		number2 = temp;
	}
	for (p = number1; p <= number2; p++)
	{
		if (p != 1 && p % 2 != 0 && p % 3 != 0 && p % 5 != 0 && p % 7 != 0)
		{
			cout<<p<<", ";
		}
		if (p==2 || p==3 || p==5 || p==7)
		{
			cout<<p<<", ";
		}
	}
	return 0;
}
