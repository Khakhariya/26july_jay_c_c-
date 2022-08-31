#include<stdio.h>
void main()
{
	int p,q,r,s,t;
	printf("enter the number up to you want to print fibonacci series:");
	scanf("%d",&s);
	p=0;
	q=1;
	printf("%d  %d  ",p,q);
	for (t=1; t<=s; t++)
	{
		if (r<=s)
		{
			r=p+q;
			if (r<=s)
			{
			printf(" %d ",r);
			}
			p=q;
			q=r;
		
		}
	}
}
