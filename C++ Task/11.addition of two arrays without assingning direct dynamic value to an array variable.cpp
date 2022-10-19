#include<iostream>
using namespace std;
int main ()
{
	int x;
	int y[20];
	int z[30];
	for (x = 0; x < 5; x++)
	{
		cout<<"enter the number y["<<x<<"] = ";
		cin>>y[x];
		cout<<"enter the number z["<<x<<"] = ";
		cin>>z[x];
	}
	for (x = 0; x < 5; x++)
	{
		cout<<endl<<"y["<<x<<"] + z ["<<x<<"] = "<<y[x]+z[x];
	}
}
