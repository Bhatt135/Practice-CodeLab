#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	
	printf("Enter your Maths marks");
	scanf("%f",&a);
	printf("Enter your science marks");
	scanf("%f",&b);
	printf("Enter your English marks");
	scanf("%f",&c);

	d = a+b+c; 
	e = d*100/300;
	printf("\n your total marks is %f",d);
	printf("\n your percentage is %f",e);
	

	if(e>=80)
	{
		printf("\n your grade is A");
	}
	else if(e>=60)
	{
		printf("\n your grade is B");
	}
	else if(e>=40)
	{
		printf("\n your grade is C");
	}
	else
	{
		printf("\n you are fail.");
	}




	return 0;
}