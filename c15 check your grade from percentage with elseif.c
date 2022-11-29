#include<stdio.h>
int main()
{	
	float a;
	printf("Enter your percentage");
	scanf("%f",&a);
	


	if(a>=80)
	{
		printf("your grade is A");
	}
	else if(a>=60)
	{
		printf("your grade is B");
	}
	else if(a>=40)
	{
		printf("your grade is c");
	}
	else
	{
		printf("you are fail. Better luck next time");
	}






	return 0;
}