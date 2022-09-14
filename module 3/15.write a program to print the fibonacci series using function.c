#include<stdio.h>
int m,n,o,q,p;
void dynamicnumber()
{
	printf("\n** enter the number upto you want to print **");
	printf("\n enter number :- ");
	scanf("%d",&m);
}
void startingnumber()
{
	o=0;
	printf(" \n%d,",o);
}
void fibonacciseries()
{
	o=1;
	for (q=o; q<m; q++)
	{
		if (n<m)
		{
			p=o;
			n=n+o;
			o=p;
		}
		if (n<m)
		{
			printf(" %d,",n);
		}
	}
}
void main()
{
	dynamicnumber();
	startingnumber();
	fibonacciseries();
}
