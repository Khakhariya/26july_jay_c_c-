#include<stdio.h>
#include<math.h>
int main()
{
	 float J,A,Y,CI,SI,B,RESULT;
	 printf("enter your principal amount:");
	 scanf("%f",&J);
	 printf("enter your rate of interest:");
	 scanf("%f",&A);
	 printf("enter your time period(in years):");
	 scanf("%f",&Y);
	 SI=(J*A*Y)/100;
	 printf("your simple interest is:%f",SI);
	 B=(1+(A/100));
	 RESULT=pow(B,Y);
	 CI=J*RESULT;
	 CI-=J;
	 printf("\nyour compound interest is:%f",CI);
}

