#include<iostream>
using namespace std;
int main ()
{
	int number1 = 55;
	int number2 = 40;
	int x,y;
	for (int x = 1; x < number2; x++)
	{
		if(number1 % x == 0 && number2 % x == 0)
		{
		    y = x;	
		}
	}
	cout<<"your number is "<<y;
}
