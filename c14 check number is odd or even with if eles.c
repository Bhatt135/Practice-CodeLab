#include<stdio.h>
int main()
{
	int a;
	printf("enter any number");
	scanf("%d",&a);

	if(a%2 == 1)
	{
		printf("your number is odd");
	}
	if(a%2!=1)
	{
		printf("your number is even");
	}



	return 0;
}