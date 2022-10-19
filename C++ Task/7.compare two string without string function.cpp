#include<iostream>
using namespace std;
int main ()
{
	char K[100];
	char J[100];
	int P;
	cout<<"\n please enter the first string : ";
	cin>>K;
	cout<<"\n please enter the second string : ";
	cin>>J;
	if (K[P] < J[P])
	{
		cout<<"\n K is less than J \n J string is big.";
	}
	else if (K[P] > J[P])
	{
		cout<<"\n J is less than K \n K string is big.";
	}
	else 
	{
		cout<<"\n K is equal to J";
	}
	return 0;
}
