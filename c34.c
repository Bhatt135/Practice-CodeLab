#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter an odd number :");
	scanf("%d",&n);
	if(n%2==1)
	{
		for(i=1;i<=n;i++)
		{
			for(j=n/2;j>=i;j--)
			{
				printf(" ");
			}
			for(k=0;k<=i/2+1;k++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}