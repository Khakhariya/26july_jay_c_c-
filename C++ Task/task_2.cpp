#include<iostream>
using namespace std;
class abstraction 
{
	private:
		int j,k;
	public:
		void set(int x,int y)
		{
			j=x;
			k=y;
		}
		void display()
		{
			cout<<"j="<<j<<endl;
			cout<<"k="<<k<<endl;
	    }
};
int main()
{
	abstraction obj;
	obj.set(25,45);
	obj.display();
	return 0;
}
