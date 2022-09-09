#include<stdio.h>
int main()
{
	int no[20][20];
	int nu[20][20];
	int p,q,r,s,t;
	printf("enter the row or column order :");
	scanf("%d %d",&s,&t);
	printf("\nenter first matrics.\n");
	for(p=0; p<s; p++)
	{
		for(q=0; q<t; q++)
	     {
	     	printf("enter your number no[%d][%d] = ",p,q);
	     	scanf("%d",&no[p][q]);
		 }
	}
	printf("\nenter first matrics.\n");
	for(p=0; p<s; p++)
	{
		for(q=0; q<t; q++)
	     {
	     	printf("enter your number nu[%d][%d] = ",p,q);
	     	scanf("%d",&nu[p][q]);
		 }
	}
	printf("\nenter first matrics value.\n");
	for(p=0; p<s; p++)
    {
		for(q=0; q<t; q++)
	     {
	     	printf("enter your number no[%d][%d] = ",p,q);
	     	scanf;("%d",&nu[p][q]);
	     }
    }
    printf("\nfirst matrics value is below.\n");
    for(p=0; p<s; p++)
	{
		for(q=0; q<t; q++)
	     {
	     	printf(" %d",no[p][q]);
	     }
	     printf("\n");
	}
	printf("\nsecond matrics value is below.\n");
    for(p=0; p<s; p++)
	{
		for(q=0; q<t; q++)
	     {
	        printf(" %d",nu[p][q]);		
	     }
	     printf("\n");
    }
	printf("\nyour matrics substraction is below.\n");
	for(p=0; p<s; p++)
	{
		for(q=0; q<t; q++)
		{
		   r=no[p][q]-nu[p][q] ;	
		   printf(" %d",r);
		}		printf("\n");
	}
}
