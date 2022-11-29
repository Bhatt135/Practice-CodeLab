#include<stdio.h>
int main()
{
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{
		if(i>=2 && i<=4)
		{	
			for(k=1;k<=5;k++)
			{
				if(k>=2 && k<=4)
				{
					printf(" ");
				}
				else
				{
					printf("*");
				}
			}
		}
		else
		{	
		
			for(j=1;j<=5;j++)
			{
				printf("*");
			}	
		}	
	
			
		printf("\n");
	}
	return 0;
}