#include<stdio.h>
int main()
{
	printf("@ enter your all subject marks to know your percentage and grade:-");
	float p,q,r,s,t,u;
	float j;
	printf("\nenter maths marks:");
	scanf("%u",&p);
	printf("enter gujrati marks:");
	scanf("%u",&q);
	printf("enter hindi marks:");
	scanf("%u",&r);
	printf("enter scince marks:");
	scanf("%u",&s);
	printf("enter english marks:");
	scanf("%u",&t);
	p=((p+q+r+s+t)*100)/600;
	printf("your percentage is:%u",j);
	if(j>70)
	printf("\nyou are distinction.");
	else if ((j>65)&&(j<=70))
	printf("\nyou are first class.");
	else if ((j>55)&&(j<=60))
	printf("\nyou are second class.");
	else if ((j>40)&&(j<=50))
	printf("\nyou are pass class.");
	else 
	printf("\nyou are fail.");
}
