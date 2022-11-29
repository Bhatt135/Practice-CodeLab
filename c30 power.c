#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter number : ");
	scanf("%d %d",&a,&b);
	d=a;
	for(c=2;c<=b;c++)
	{
		a=d*a;
	}
	printf("%d",a);
	return 0;
}