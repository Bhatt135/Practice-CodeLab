#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	printf("Enter your dis. in KM");
	scanf("%f",&a);
	b=a/1000;
	printf("Your dist in meter is :%f\n",b);
	c=b/100;
	printf("Your dist in centimeter is :%f\n",c);
	d=c/2.54;
	printf("Your dist in inches is :%f\n",d);
	e=d*12;
	printf("Your dist in feet is :%f\n",e);
	return 0;
	
}