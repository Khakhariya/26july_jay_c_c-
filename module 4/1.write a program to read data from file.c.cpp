#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *J;
	int j;
	J=fopen("C:/Users/HP/Desktop/module 4/.txt","r");
	fscanf(J,"%d",&j);
	printf("your number is :- %d",j);
	fclose (J);
	return 0;
}
