#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *J;
	int j=2000;
	J=fopen("C:/Users/HP/Desktop/module4/.txt","w");
	fprintf(J,"%d",j);
	fclose(J);
	J=fopen("C:/Users/HP/Desktop/module4/.txt","r");
	fscanf(J,"%d",j);
	printf("your value is %d",j);
	fclose(J);
	return 0;
}
