#include<stdio.h>
int main()
{
	float a,b;
	printf("enter any number A=");
	scanf("%f",&a);
	printf("enter any number B=");
	scanf("%f",&b);
	
	
	if(b == 0)
	{
		printf("This value is inappropriate");
	}
	else
	{
		printf("A/B=%f",a/b);
	}
	


	return 0;
}