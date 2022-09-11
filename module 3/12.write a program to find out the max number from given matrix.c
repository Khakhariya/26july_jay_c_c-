#include<stdio.h>
int main()
{
	int v[5][5];
	int w=0,x=0,y,z;
	printf("\n * enter the row and column as per your condition * \n");
	printf("\nenter your row :-  ");
	scanf("%d",&y);
	printf("\nenter your column :-  ");
	scanf("%d",&z);
	printf("\n * enter the number of array. \n\n");
	do
	{
		do
		{
			printf(" %d. enter the number &v[%d][%d] :-  ",w+1,w,x);
			scanf("%d",&v[w][x]);
			x++;
		}
		while(x<z);
		w++;
		x=0;
	}
	while(w<y);
	printf("\n * your answer is below. \n");
	for (w=0; w<y; w++)
	{
		for (x=0; x<z; x++)
		{
			if (v[w][x]>v[0][0])
			{
				v[0][0]=v[w][x];
			}
		}
	}
	printf("\n => your max matrics value is %d ",v[0][0]);
}
