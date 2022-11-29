#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any number A=");
	scanf("%d",&a);
	printf("Enter any number B=");
	scanf("%d",&b);

	if(a>b)
	{
		printf("A > B");
	}
	else
	{
		printf("A < B");
	}

	return 0;

}