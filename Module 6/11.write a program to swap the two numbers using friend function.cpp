#include<iostream>
using namespace std;
class number
{
	private :
		int j;
		int k;
	public :
		void beforeswap ()
		{
			cout<<"enter two numbers";
			cout<<endl<<"J = ";
			cin>>j;
			cout<<"K = ";
			cin>>k;
			cout<<"\n*****before swapping number*****";
			cout<<endl<<"\t-> j = "<<j;
			cout<<endl<<"\t-> K = "<<k;
		}
		friend int swapnumber (number);
};
int swapnumber (number n1)
{
	int temp;
	   temp = n1.j;
	   n1.j = n1.k;
	   n1.k = temp;
	   cout<<endl<<"\n*****after swapping number *****";
	   cout<<endl<<"\t-> J = "<<n1.j;
	   cout<<endl<<"\t-> K = "<<n1.k;
	   return 0;
}
int main ()
{
  number n;
  n.beforeswap();
  swapnumber (n);
  return 0;
}
