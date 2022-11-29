#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	for (int i = 0; i < a; i++)
	{
		for(int k=a;k>=i;k--)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			if(j==0 || j==i)
			{
				printf("1");
			}
			else
			{
				
			}
		}
		printf("\n");
	}
	
}