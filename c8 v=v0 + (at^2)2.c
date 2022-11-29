#include<stdio.h>
int main()     //v=v0 + (at^2)/2
{
	float v0=10.83,a=5.9,t=2.0002,v;
	v=v0+a*t*t/2;
	printf("v=%f",v);
	return 0;
}