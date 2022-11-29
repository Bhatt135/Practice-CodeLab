#include<stdio.h>
int main()
{
	int i,j;
	printf("enter any number");
	scanf("%d",&i);
	printf("enter any number");
	scanf("%d",&j);
	while(i<=j)
	{
		printf("\n %d",i);
		i=i+1;
	}

	return 0;
}	