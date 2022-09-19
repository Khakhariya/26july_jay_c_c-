#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *v;
	int w,x;
	int y,z;
	printf("\n\thow many number you want to print.");
	printf("\nenter the number.:-");
	scanf("%d",&w);
	printf("\n\tenter the value below.\n");
	v=(int *)malloc(w*sizeof(int));
	for(x=0; x<w; x++)
	{
		printf("enter the value:- ");
		scanf("%d",&v[x]);
	}
	for(x=0; x<w; x++)
	{
		for(y=0; y<w; y++)
		{
			if(v[x]<v[y])
			{
				z=v[x];
				v[x]=v[y];
				v[y]=z;
			}
		}
	}
	for(x=0; x<w; x++)
	{
		printf("\nyour value is %d.",v[x]);
	}
}
