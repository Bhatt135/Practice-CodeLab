#include<stdio.h>
int main()
{
	int i,j,k;
	printf("enter any number :");
	scanf("%d",&j);
	for(i=2;i<j;i++)
	{
		k=j%i;
		if(k==0)
		{
			printf("your number is not prime number");
			i=i+100000;	
		}
		
	}
	if(i==j)
	{
		printf("your num is prime number");
	}
	
	return 0;
}