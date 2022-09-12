#include<stdio.h>
int main()
{
	int *x,y[5],z;
	for(z=0; z<5; z++)
	{
		x=&y[z];
		printf("enter number y[%d]:",z+1);
		scanf("%d",&*x++);
	}
	 *x=y[0];
	for(z=0; z<5; z++)
	{
	    x=&y[z];
		printf("\nyour number is : %d ",*x++);
	}
}
