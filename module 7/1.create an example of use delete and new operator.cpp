#include<iostream>
using namespace std;
class garden
{
	private :
		int Public;
		int child;
	public :
		garden ()
		{
			cout<<"enter childs in the garden :- ";
			cin>>child;
			cout<<"enter pubilc in the garden :- ";
			cin>>Public;
		}
		void show ()
		{
			cout<<endl<<"total child :- "<<child;
			cout<<endl<<"total Public :- "<<Public;
		}
};
int main ()
{
	cout<<endl<<"----------enter the information of garden----------"<<endl;
	garden *ptr = new garden ();
	cout<<endl<<"----------show the infomation of garden----------";
	ptr ---> show ();
	delete ptr;
	return 0;
}
