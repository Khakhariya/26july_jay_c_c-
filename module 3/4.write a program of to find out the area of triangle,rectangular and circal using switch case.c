#include<stdio.h>
#define pi 3.14
int main()
{
	int t,o,y,ja,h,k;
    printf("Enter Any no.:");
    scanf("%d",&k);
	switch (k)
	{
	case 1:
		printf("\n\n1)enter the length of triangle:");
		scanf("%d",&ja);
		printf("enter of the hight tringle:");
		scanf("%d",&y);
		printf("\n-->area of tringle is:%f",0.5*ja*y);
		break;
	case 2:
		printf("\n\n2)enter length of rectangular:");
		scanf("%d",&o);
		printf("enter breadth of rectangular:");
		scanf("%d",&y);
		printf("\n-->area of rectangular is:%f",o*y);
		break;
	case 3:
		printf("3)enter the radious of circle:");
		scanf("%d",&ja);
		printf("\n-->area of circle is:%f",(pi*ja*ja));		
		break;
	default:
		printf("enter valid selection..........");
		break;
	}
}
