#include<iostream>
using namespace std;
class practise
{
	private:
		int j;
		int k;
	public:
	    int r;
	    int p;
	int assign()
	{
		j=r;
		k=p;
		cout<<"enter two number";
		cin>>r>>p;
		return 0;
	}    
	int object(practise,practise);		
};
practise::object(practise p1,practise p2)
{
	cout << endl << p1.r << " + " << p2.r <<" = " << p1.r + p2.r;
	cout << endl << p1.p << " - " << p2.p <<" = " << p1.p - p2.p;
	cout << endl << p1.r << " * " << p2.r <<" = " << p1.r * p2.r;
	cout << endl << p1.p << " % " << p2.p <<" = " << p1.p % p2.p;
	cout << endl << p1.r << " / " << p1.r <<" = " << (float)p1.r / (float)p2.p;
	return 0;
}
int main()
{
	practise pp1,pp2,pp3;
	pp1.assign();
	pp2.assign();
	pp3.object(pp1,pp2);
	return 0;
}
