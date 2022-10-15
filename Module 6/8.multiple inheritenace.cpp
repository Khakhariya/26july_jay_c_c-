#include<iostream>
using namespace std;
class person
{
	public:
		int age;
		char name[10];
		void writedata();
};
void person :: writedata()
{
	cout<<"\n\t*****enter member details*****"<<endl;
	cout<<endl<<"\tenter member age :";
	cin>>age;
	cout<<"\tenter member name :";
	cin>>name;
}
class student
{
	public:
		int per;
		void percentage ();
};
void student :: percentage()
{
	cout<<"\tenter the member percentage :";
	cin>>per;
}
class teacher
{
	public:
		int sal;
		void salary();
};
void teacher :: salary()
{
	cout<<"\tenter the salary of member :";
	cin>>sal;
}
class principal : public person,public student,public teacher
{
	public:
		void readdata();
};
void principal :: readdata()
{
	cout<<"\n\t.....member details is under....."<<endl;
	cout<<"\n\t|"<<"member name is"<<name;
	cout<<"\n\t|"<<"member age is"<<age;
	cout<<"\n\t|"<<"member precentage is"<<per;
	cout<<"\n\t|"<<"member salary is"<<sal;
}
int main()
{
	principal p1;
	p1.writedata();
	p1.percentage();
	p1.salary();
	p1.readdata();
	return 0;
}
