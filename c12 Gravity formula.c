#include<stdio.h>
int main()
{
	float G,g,m1,m2,r;
	g=9.8;
	m1=40;
	m2=30;
	r=50;
	G=g*m1*m2/(r*r);
	
	printf("%f",G);

	return 0;
}