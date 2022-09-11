#include<stdio.h>
#include<string.h>
int enterdata ()
{
	char R[10];
	char K[10];
	printf("\n\t* enter 1st string name :- ");
	scanf("%s",&R);
	strcpy(K,R);
}
int printdata ()
{
	char K[10];
	printf("\n\t ** string 2nd is copied from 1st string. \n\n");
	printf("\t => 2nd string name is %s",K);
}
int main()
{
	enterdata ();
	printdata ();
}
