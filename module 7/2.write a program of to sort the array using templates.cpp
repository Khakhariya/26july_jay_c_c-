#include<iostream>
#include<iomanip>
using namespace std;
template <class j>
class sort
{
	public :
		j k[10];
		j l,m,n;
	j enterdata ()
	{
		cout<<"enter the number :- "<<endl;
		for (l = 0; l < 5; l++)
		{
			cout<<setw (20)<<"k["<<l+1<<"] = ";
			cin>>k[l];
		}
		return 0;
	}
	j showdata ()
	{
		for (l = 0; l < 5; l++)
		{
			for (n = l+1; n <5; n++)
			{
				if (k[l] > k[n])
				{
					m = k[l];
					k[l] = k[n];
					k[l] = m;
				}
			}
			cout<<endl<<setw(20)<<"ans["<<l+1<<"] ="<<k[l];
		}
		return 0;
	}
};
int main ()
{
	sort<int> s1;
	cout<<endl<<"----------enter any 5 number to sort that numbers----------" <<endl;
	s1.enterdata();
	cout<<endl<<"----------5 sorted numbers is given below----------" <<endl;
	cout<<"your number is :- ";
	s1.showdata();
	return 0;
}
