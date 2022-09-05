#include<stdio.h>
int main()
{
	int j [10];
	int k;
	for(k=1;k<10;k++)
	{
	   printf("j[%d]",k);
	   scanf("%d",&j[k]);
	}
	for(k=1;k<10;k++)
	{
		if(j[0]<j[k])
		{
			j[0]=j[k];
		}
	} 
	printf("%d is max.",j[0]);
}
