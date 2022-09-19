#include<stdio.h>
int main()
{
	char *x[20];
	char *y[20];
	int z;
	printf("\n\tenter string name**\n");
	printf("enter the 1st string :- ");
	scanf("%s",&x);
	printf("enter the 2st string :- ");
	scanf("%s",&y);
	printf("\n\t**your concatenate value is below** \n");
	for (z=0; z<2; z++)
	{
		printf("%s",x);
		*x=y;
	}
}
