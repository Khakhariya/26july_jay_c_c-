#include<stdio.h>
int main()
{
	int no[5][5];
	int r,k;
	for(r=0;r<3;r++)
	{
	   for(k=0;k<3;k++)
	   {
	      printf("enter no[%d][%d] : ",r,k);
		  scanf("%d",&no[r][k]);	
	   }	
	}
	for(r=0;r<3;r++)
	{
		for(k=0;k<3;k++)
		{
			printf(" %d",no[r][k]);
		}
		printf("\n");
	}
}
