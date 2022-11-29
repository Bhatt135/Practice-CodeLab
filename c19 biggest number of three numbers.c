#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any number A=");
	scanf("%d",&a);
	printf("Enter any number B=");
	scanf("%d",&b);
	printf("Enter any number C=");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("A is the biggest number");
		if(b>c)
		{
			printf("\n B is the middle number");
			printf("\n c is the smallest number");
		}
		else
		{
			printf("\n c is the middle number");
			printf("\n B is the smallest number");

		}
	}
	else if(b>a && b>c)
	{
		printf("B is the biggest number");
		if(a>c)
		{
			printf("\n a is the middle number");
			printf("\n c is the smallest number");
		}
		else
		{
			printf("\n c is the middle number");
			printf("\n a is the smallest number");

		}

	}
	else if(c>a && c>b)
	{
		printf("C is the biggest number");
		if(b>a)
		{
			printf("\n B is the middle number");
			printf("\n A is the smallest number");
		}
		else
		{
			printf("\n A is the middle number");
			printf("\n B is the smallest number");

		}
	}
	else if(b==a && b>c)
	{
		printf("B and A are equal numbers");
		printf("\n c is the smallest number");
	}
	else if(c==a && c>b)
	{
		printf("C and A are equal numbers");
		printf("\n B is the smallest number");
	}
	else if(b==c && b>a)
	{
		printf("B and c are equal numbers");
		printf("\n A is the smallest number");
	}
	else
	{
		printf("All three numbers are equal");
	}

	return 0;
}