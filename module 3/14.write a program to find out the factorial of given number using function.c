#include<stdio.h>
int K,J,P=1;
int dynmicvalue ()
{
	printf("\n\t* enter any number to get factorial :- ");
	scanf("%d",&K);
}
int printvalue ()
{
	for(J=K; J>0; J--)
	{
		P*=J;
	}
	printf("\n\t => your number factorial is %d.\n\n",P);
}
int main ()
{
	dynmicvalue ();
	printvalue ();
}
