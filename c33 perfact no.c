#include<stdio.h>

int main() 
{
  	int n,j,i,sum,l;
	printf("enter any num :");
	scanf("%d",&n);       
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			printf("%d \n",i);
		}
	}
    	return 0;
}