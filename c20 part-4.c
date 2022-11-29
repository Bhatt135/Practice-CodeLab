#include<stdio.h>
int main()
{
	float a,b,num1,num2;
	printf("Enter any values: ");
	scanf("%f",&num1);
	printf("Enter any values: ");
	scanf("%f",&num2);
	b=1;
		
		if(num2<0)
		{
			a=num2;
			while(a<0)
			{
				b=b*(1/num1);
				printf("\n %f",b);
				a=a+1;
			}
		}		

		else
		{
			a=1;
			while(a<=num2)
			{
				b=b*num1;
				a=a+1;
			}
		}
	
	printf("%f",b);
	return 0;



}