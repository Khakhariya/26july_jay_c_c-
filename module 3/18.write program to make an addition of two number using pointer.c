#include<stdio.h>
int main()
{
	int *h,*i;
	int j,k,l;
	printf("\n\tenter first number :- ");
	scanf("%d",&j);
	printf("\tenter second number :- ");
	scanf("%d",&k);
	h=&j;
	i=&k;
	l = *h + *i ;
	printf("\n\tyour addition is %d.",l);
}
