#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any number");
	scanf("%d",&a);
	printf("enter any number");
	scanf("%d",&b);

	c=a%b;

	if(c == 0)
	{
		printf("numbers are proper");
	}
	else
	{
		printf("numbers are improper");
	}

	return 0;
}