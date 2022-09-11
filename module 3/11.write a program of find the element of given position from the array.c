#include<stdio.h>
int main()
{
	int p[20];
	int q,r,s;
	printf("enter how many number you want to print :");
	scanf("%d",&q);
	     for(r=0; r<q; r++)
		{
		 	printf("enter element number p[%d] = ",r);
		 	scanf("%d",&p[r]);
		}
	printf("enter the element number = ");
	scanf("%d",&s);
	     for(r=0; r<q; r++)
		{
            if (p[r]==s)
			{
				printf("your element index is %d .",r+1);
			}	    
		}	 
}
