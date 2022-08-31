#include<stdio.h>
void main()
{
	int y,z;
	printf("enter number want to print reverse up to number:");
	scanf("%d",&z);
	for (y=z; y>=0; y--)
	{
		printf("%d, ",y);
	}
}
