#include<iostream>
#include<string.h>
using namespace std;
class jay 
{
	private :
		char m[20];
	public :
		void entername ()
		{
			cout<<"enter 1st string name :-";
			cin>>m;
		}
		jay operator + (jay obj)
		{
			jay obj1;
			strcat (m,obj.m);
			strcpy (obj1.m,m);
			return obj1;
		}
		void showdata ()
	{
		cout <<endl<< m;
	}
};
int main ()
{
    jay s1,s2,s3;
	s1.entername();
	s2.entername();
	cout<<endl<<"before concenate the two string";
	cout<<endl<<"1st string is";
	s1.showdata();
	cout<<endl<<"2st string is";
	s2.showdata();
	cout<<endl<<"after concenate the two string";
	s3 = s1 + s2;
	s3.showdata();
	return 0;
}
