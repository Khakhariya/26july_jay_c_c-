#include<stdio.h>
int main()
{
	 int w,x=0,y,z;
	 printf("enter the number you want to summation:");
	 scanf("%d",&w);
	 {
	 	 for (z=1; z<10; z++)
	     {
	     	y=w%10;
	     	x+=y;
	     	w/=10;
	     	      if(w==0)
	     	      {
	     	      	z=10;
	     	      	printf("your summation is %d",x);
				   }
		 }
	 }
}
