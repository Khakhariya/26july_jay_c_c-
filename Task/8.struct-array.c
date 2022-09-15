#include<stdio.h>
struct jay
{
	int m[5];
	char n[];
}rk;
int main ()
{
	int o;
	for (o=0; o<5; o++)
	{
		printf("enter the no.");
		scanf("%d",&rk.m[o]);
		printf("enter the name:-");
		scanf("%s",&rk.n[o]);
	}
	for (o=0; o<5; o++)
	{
		printf("\nenter the no%d.",rk.m[o]);
		printf("\nenter the name:-%c",rk.n[o]);
	} 
}
