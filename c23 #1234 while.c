#include<stdio.h>
int main()
{
	int i,j;
	i=1;
	
	while(i<=4)
	{	
		j=1;
		if(j<=i)
		{
			while(j<=i)
			{
				printf("#");
				j++;
			}
		}
		
		
		printf("\n");
		i++;


	}

	return 0;

}