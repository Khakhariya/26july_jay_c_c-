#include<iostream>
using namespace std;
class abstraction
{
	private :
		int sum;
	public :
		abstraction ()
		{
			int k;
			sum =k;
		}
		int sum1 (int j, int p)
		{
			sum = j + p;
			return 1;
		}
		int add ()
		{
			return sum;
		}
};
int main ()
{
	int number,number1;
	cout<<"enter the number :- ";
	cin>>number>>number1;
	abstraction obj;
	obj.sum1(number,number1);
	cout<<"your addition is"<<obj.add();
}
