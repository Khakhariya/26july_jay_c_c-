#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
	char name [100];
	int age;
	ofstream j;
	j.open("C:/Users/HP/Desktop/12.txt");
	cout<<endl<<"----------writing in the file----------";
	cout<<endl<<"enter your name :- ";
	cin>>name;
	j<<endl<<name;
	cout<<"enter your age :- ";
	cin>>age;
	j<<endl<<age;
	j.close();
	ifstream k;
	k.open("C:/Users/HP/Desktop/12.txt");
	cout<<endl<<"----------reading in the file----------";
	k>>name;
	cout<<endl<<"your name is :- "<<name;
	k>>age;
	cout<<endl<<"your name is :- "<<age;
	k.close();
	return 0;
}
