#include<stdio.h>
int main()
{
	int k,j,p;
	for(k=1;k<=5;k++)
	{
		for(j=1;j<k;j++)
		{
			p=p+1;
			printf("%d ",p);
		}
		printf("\n");
	}
}
