#include<stdio.h>
int main()
{
	int k,j,p, num[5];
	for(k = 0; k < 5; ++k)
	{
		printf("enter num[%d]:",k);
		scanf("%d",&num[k]);
	}
	for(k = 0; k < 5; ++k)
	{
		for(j = k + 1 ; j < 5; ++j)
		{
			if(num[k] > num[j])
		    {
		    	p = num [k];
		    	num[k] = num[j];
		    	num[j] = p;
			}
		} 
	}
	for(k = 0; k < 5; ++k)
	{
		printf("num[%d]: %d\n",k, num[k]);
	}
}
