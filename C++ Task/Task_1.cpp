#include<iostream>
using namespace std;
int main()
{
	int k;
	int j;
	int p=0;
	for (k=5; k>0; k--)
	{
		for (j=5; j>=p; j--)
		{
			cout<<" ";
		}
		p--;
		for (j=1; j<=k; j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}

