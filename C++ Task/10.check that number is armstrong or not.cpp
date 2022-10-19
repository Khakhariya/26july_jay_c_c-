#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	int number;
	int v,w,x,y,z=0;
	cout<<endl<<"**********enter number to check that it is an asmstrong number or not**********"<<endl;
	cout<<endl<<right<<setw(29)<<"enter the number :- ";
	cin>>number;
	w = number;
	v = 1 + log10 (number);
	for (int w = 0; w < v; w++)
	{
		y = number;
		x = pow (number %= 10,v);
		y /=10;
		number = y;
		z += x;
	}
	cout<<endl<<"\tyour result is under";
	if (w == z)
	{
		cout<<endl<<right<<setw(12)<<"--->"<<w<<"is an armstrong number";
	}
	else
	{
	    cout<<endl<<setw(12)<<"--->"<<w<<"is not an armstrong number";	
	}
	return 0;
}
