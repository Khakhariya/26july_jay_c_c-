#include<stdio.h>
int main()
{
	int no[20][20];
	int nu[20][20];
	int nm[20][20];
	int u,v,w,x,y,z=0;
	printf("enter the row or column order :");
	scanf("%d %d",&x,&y);
	printf("\nenter first matrics value.\n");
	for(u=0; u<x; u++)
	{
		for(v=0; v<y; v++)
		{
			printf("enter your number no[%d][%d] = ",u,v);
			scanf("%d",&no[u][v]);
		}
    }
    printf("\nenter second matrics value.\n");
    for(u=0; u<x; u++)
    {
    	for(v=0; v<y; v++)
    	{
    		printf("enter your number nu[%d][%d] = ",u,v);
    		scanf("%d",&nu[u][v]);
		}
	}
	printf("\nyour matrics multiplication is below.\n");
	for(u=0; u<x; u++)
	{
		for(v=0; v<y; v++)
		{
			for(w=0; w<y; w++)
			{
				z= z + no[u][w]*nu[w][v];

			}
			nm[u][v] = z;
			printf(" = %d  ",nm[u][v]);
			z=0;
		}
		printf("\n");
	}
	return 0;
}
