#include<iostream>
using namespace std;
class lecture
{
	private:
		string lecturer;
		string subject;
		string course;
		int lecturers;
		int j;
	public:
	    int assign()
		{
			cout<<"enter the number of lecturer :- ";
			cin>>lecturers;
			for (j=0; j<lecturers; j++)
			{
			cout<<"enter the name of lecturer :- ";
			cin>>lecturer;
			cout<<"enter the name of subject :- ";
			cin>>subject;
			cout<<"enter the name of course :- ";
			cin>>course;	
			}
		return 0;
		} 
		int show ()
		{
			int k;
			cout<<"enter which lecturer detail you want to see :- ";
			cout<<".....press 1,2,3,4,5.....";
			cin>>k;
			for (j=k; j<=k; j++)
			{
			cout<<endl<<"\tname of lecturer is :- "<<lecturer;
			cout<<endl<<"\tname of subject is :- "<<subject;
			cout<<endl<<"\tname of course is :- "<<course;	
			}
		}
};
int main ()
{
	lecture obj;
	obj.assign();
	obj.show();
	return 0;
}
