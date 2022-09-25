#include<stdio.h>
int main()
{
	int x,y=1;
	printf("enter the number :- ");
	scanf("%d",&x);
	FILE *z;
	z=fopen("C:/Users/HP/Desktop/jay/.txt","w");
	for (y=1; y<=10; y++)
	{
		fprintf(z,"%d * %d = %d",x,y,x*y);
	}
	fclose(z);
	z=fopen("C:/Users/HP/Desktop/jay/.txt","r");
	for (y=1; y<=10; y++)
	{
		 fscanf(z,"%d%d%d",&x,&y);
		 printf("\n%d * %d = %d",x,y,x*y);
	}
	fclose(z);
	return 0;
}
