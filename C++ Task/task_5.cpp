#include<iostream>
using namespace std;
int main ()
{
	int x;
	int y;
	int z;
	for (x=4; x>0; x--)
	{
		for (y=0; y<x; y++)
		{  
		    cout<<" ";	
		}
		for (y=5; y>x; y--)
		{  
		    cout<<"* ";	
		}
		cout<<"\n";
	}
	for (x=5; x>0; x--)
	{
		for (y=5; y>x; y--)
		{  
		    cout<<" ";	
		}
		for (y=0; y<x; y++)
		{  
		    cout<<"* ";	
		}
		cout<<"\n";
	}
    return 0;	
}
