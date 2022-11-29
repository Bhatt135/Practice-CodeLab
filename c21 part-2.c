#include<stdio.h>
int main()
{
	int i,j,k;
	printf("Enter any number : ");
	scanf("%d",&j);
	for(i=2;i<j;i++)
	{
		k=j%i;
		if(k==0)
		{
			printf("Your number is not prime");	
			i+=100000000;		
		}
		
	}
	
	
	return 0;	
}