#include<stdio.h>
int main()
{
	int p,q,r,s;
	printf("\nente number you want to print in reverse order:-");
	scanf("%d",&p);
	     for(s=0; s<10; s++)
	    {
	    	q=p%10;
	    	r=(r*10)+q;
	    	p=p/10;
	    	if(p==0)
	        {
	        	s=10;
			}
			if(s==10)
			{
				printf("\nreverse order of number is:-%d",r);
			}
		}
}
