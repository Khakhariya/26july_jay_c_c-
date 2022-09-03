#include<stdio.h>
int main()
{
	int s,u,v;
	for(s=4;s>=1;s--)
	{
		for(u=3;u>=s;u--)
		{
			printf("   ");
		}
		for(v=1;v<=s;v++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}
