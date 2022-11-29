#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter any three digit number");
	scanf("%d",&a);

	if(a>99 && a<1000)
	{
		b=a/100;
		c=a%100;
		d=c/10;
		e=c%10;
		f=b+d+e;
		printf("\n your first number is %d",b);
		printf("\n your second number is %d",d);
		printf("\n your third number is %d",e);
		printf("\n sum=%d",f);
	}
	else
	{
		printf("your number is inappropriate");
	}
	return 0;

}