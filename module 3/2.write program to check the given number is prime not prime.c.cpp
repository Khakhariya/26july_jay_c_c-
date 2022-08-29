#include<stdio.h>
int main()
{ 
    int p,q,r,s,t;
	printf("\nenter number to know it is prime or not:");
	scanf("%d",&p);
	if (p>7)
	{
		q=p%2;
		r=p%3;
		s=p%5;
	    t=p%7;
		 if((q<=0)||(r<=0)||(s<=0)||(t<=0))
		 	printf("\nit is not prime number");
		 else 
		 	printf("\nit is prime number");
	}
	else
	{
		if((p==2)||(p==3)||(p==5)||(p=7)) 
		   printf("\nit is prime number.");
		else 
		   printf("\nit is not prime number.");
	}
	return 0;
}
