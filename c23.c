#include<stdio.h>
int main()
{	
	int i;
	for(i=1;i<=29;i++)
	{
		if(i%6!=0)
		{
			printf("#");
		}
		else
		{
			printf("\n");
		}
		
	}
	return 0;
}