#include<stdio.h>
int main()
{
	int no[20][20];
	int nu[20][20];
	int p,q,r,s,t;
	printf(" * enter the row or column order: \n");
	printf("> enter row you want:-");
	scanf("%d",&s);
	printf(">enter the column you want:-");
	scanf("%d",&t);
	printf("\n * enter first matrix value.\n\n");
	for(p=0;p<s;p++)
	{
		for(q=0;q<t;q++)
		{
			printf("enter your number no[%d][%d] = ",p,q);
			scanf("%d",&no[p][q]);
		}
	}
	printf("\n * enter second matrix value.\n\n");
	for(p=0;p<s;p++)
	{
		for(q=0;q<t;q++)
		{
			printf("enter your number nu[%d][%d] = ",p,q);
			scanf("%d",&nu[p][q]);
		}
	}
	printf("\n * your matrix modulo is below.\n");
	for(p=0;p<s;p++)
	{
		for(q=0;q<t;q++)
		{
			r=no[p][q]%nu[p][q];
			printf(" %d ",r);
		}
		printf("\n");
	}
}

