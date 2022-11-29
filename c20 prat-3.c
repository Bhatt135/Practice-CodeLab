#include<stdio.h>
int main()
{
	int i,j,num1,num2;
	i=1;
	printf("Enter any number :");
	scanf("%d",&num1);
	printf("Enter any number :");
	scanf("%d",&num2);
	j=0;
	while(i<=num2)
	{
		j=j+num1;
		i=i+1;
	}
	printf("%d",j);
	return 0;

}