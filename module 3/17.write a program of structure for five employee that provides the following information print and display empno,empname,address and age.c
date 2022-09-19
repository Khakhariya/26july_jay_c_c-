#include<stdio.h>
struct employee
{
	int f,g;
	char h[100],i[100];
}in[20];
int main ()
{
	int j;
	for (j=0; j<5; j++)
	{
		printf("\n\t**enter the %d employee details.**\n",j+1);
		printf("enter the employee [%d] no :- ",j+1);
		scanf("%d",&in[j].f);
		printf("enter the employee [%d] age :- ",j+1);
		scanf("%d",&in[j].g);
		printf("enter the employee [%d] name :- ",j+1);
		scanf("%s",&in[j].h);
		printf("enter the employee [%d] address :- ",j+1);
		scanf("%s",&in[j].i);
	}
	for (j=0; j<5; j++)
	{
		printf("\n\t** %d employee details are below.**",j+1);
		printf("\nenter the employee [%d] no is %d",j+1,in[j].f);
		printf("\nenter the employee [%d] age is %d",j+1,in[j].g);
		printf("\nenter the employee [%d] name is %s",j+1,in[j].h);
		printf("\nenter the employee [%d] address is %s",j+1,in[j].i);		
	}
}
